#include<stdio.h>
#include<conio.h>
#include<math.h>
/* Defining function for Gaus Seidal */
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20
/* Defining function for Jacobi */
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20
int main()
{
        int p;
    printf("Please! Enter Your Method.\n");
    printf("1.For gaus eliminate Enter 1\n");
    printf("2.For gaus Jordan Enter 2\n");
    printf("3.For gaus seidal Enter 3\n");
    printf("4.For jacobi  Enter 4\n");

    scanf("%d",&p);
    if(p==1){
    int i,j,k,n;
    float A[20][20],c,x[10],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    /* this loop is for backward substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
    }

    }
    else if(p==2){

     int i,j,k,n;
    float A[20][20],c,x[10];
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    /* Now finding the elements of diagonal matrix */
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return(0);
    }

    else if(p==3){
    float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
     int count=1;
     //clrscr();
     printf("Enter tolerable error:\n");
     scanf("%f", &e);

     printf("\nCount\tx\ty\tz\n");
     do
     {
      /* Calculation */
      x1 = f1(x0,y0,z0);
      y1 = f2(x1,y0,z0);
      z1 = f3(x1,y1,z0);
      printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

      /* Error */
      e1 = fabs(x0-x1);
      e2 = fabs(y0-y1);
      e3 = fabs(z0-z1);

      count++;

      /* Set value for next iteration */
      x0 = x1;
      y0 = y1;
      z0 = z1;

     }while(e1>e && e2>e && e3>e);

     printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

     getch();

    }
    else if(p==4){
      float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
     int count=1;
     //clrscr();
     printf("Enter tolerable error:\n");
     scanf("%f", &e);

     printf("\nCount\tx\ty\tz\n");
     do
     {
      /* Calculation */
      x1 = f1(x0,y0,z0);
      y1 = f2(x0,y0,z0);
      z1 = f3(x0,y0,z0);
      printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

      /* Error */
      e1 = fabs(x0-x1);
      e2 = fabs(y0-y1);
      e3 = fabs(z0-z1);

      count++;

      /* Set value for next iteration */
      x0 = x1;
      y0 = y1;
      z0 = z1;
     }while(e1>e && e2>e && e3>e);

     printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

     getch();

    }

    return(0);
}
