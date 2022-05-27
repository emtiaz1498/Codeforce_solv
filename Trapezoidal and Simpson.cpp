/*
  1. Write a code to integrate a given function using
		i. Trapezoidal rule
		ii. Simpson's 1/3 rule
		iii.  Simpson's 3/8 rule

  2. Write a code to integrate a tabulated function using
		i. Trapezoidal rule
		ii. Simpson's 1/3 rule
		iii.  Simpson's 3/8 rule
*/

#include<stdio.h>
#include<math.h>

#define f(x) 1/(1+pow(x,2))
#define MAX 15

void GivenFunction();
void Trapezoidal_GivenFunction();
void OneThird_GivenFunction();
void ThreeEight_GivenFunction();

void TabulatedFunction();
void Trapezoidal_TabulatedFunction();
void OneThird_TabulatedFunction();
void ThreeEight_TabulatedFunction();

int main(){

      int n;
      printf("\nPress 1, To integrate a given function\n");
      printf("\nPress 2, To integrate a tabulated function \n");

       scanf("%d",&n);
      switch(n){

	case 1:
		GivenFunction();
		break;
	case 2:
		TabulatedFunction();
		break;

      }

     return 0;

}
/* End main Function */

/*-----------------------------------------------------------------------------------*/

void GivenFunction(){

    int x;
     printf("\nselect any methods\n");
     printf("Press 1, Using Trapezoidal rule\n");
     printf("Press 2, Using Simpson's 1/3 rule\n");
     printf("Press 3, Using Simpson's 3/8 rule\n");
     scanf("%d",&x);

            switch(x){

            case 1:
            	Trapezoidal_GivenFunction();
            	break;
            case 2:
                OneThird_GivenFunction();
                break;
			case 3:
				ThreeEight_GivenFunction();
				break;

     }
}
/* End of GivenFunction();*/

/*-----------------------------------------------------------------------------------*/


void Trapezoidal_GivenFunction(){
float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);

 /* Calculation */
 /* Finding step size */
 stepSize = (upper - lower)/subInterval;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * f(k);
 }
 integration = integration * stepSize/2;
 printf("\nRequired value of integration is: %.3f", integration);
}

/* End of Trapezoidal_GivenFunction();*/

/*-----------------------------------------------------------------------------------*/


void OneThird_GivenFunction(){

   float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);

 /* Calculation */
 /* Finding step size */
 stepSize = (upper - lower)/subInterval;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%2==0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 4 * f(k);
  }
 }
 integration = integration * stepSize/3;
 printf("\nRequired value of integration is: %.3f", integration);

}
/* End of OneThird_GivenFunction() */

/*-----------------------------------------------------------------------------------*/

void ThreeEight_GivenFunction(){

   float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);

 /* Calculation */
 /* Finding step size */
 stepSize = (upper - lower)/subInterval;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%3 == 0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 3 * f(k);
  }
 }
 integration = integration * stepSize*3/8;
 printf("\nRequired value of integration is: %.3f", integration);

}
/* End of ThreeEight_GivenFunction()/*

/*-----------------------------------------------------------------------------------*/


void TabulatedFunction(){

   int x;
     printf("\nselect any methods\n");
     printf("Press 1, Using Trapezoidal rule\n");
     printf("Press 2, Using Simpson's 1/3 rule\n");
     printf("Press 3, Using Simpson's 3/8 rule\n");
     scanf("%d",&x);

            switch(x){

            case 1:
            	Trapezoidal_TabulatedFunction();
            	break;
            case 2:
                OneThird_TabulatedFunction();
                break;
			case 3:
				ThreeEight_TabulatedFunction();
				break;

     }

}
/* End of TabulatedFunction()*/

/*-----------------------------------------------------------------------------------*/


/*
Variables used
   n - Number of table points
   x - array of independent data points
   y - array of function values
   a - lower limit of integration
   b - upper limit of integration
   h - distance beteween points
   n1 - position of a in the table
   n2 - position of b in the table
   ict - value of integral
*/

void Trapezoidal_TabulatedFunction(){

    int n,n1,n2,i;
  float a,b,h,sum,ict,x[MAX],y[MAX];

  /* Reading table values*/
  printf("Number of data points\n");
  scanf("%d",&n);
  printf("\nInput table values, set by set \n");
  for(i=1;i<=n;i++)
	scanf("%f %f",&x[i],&y[i]);

  /* Reading the limits of integration */
  printf("Initial value of x \n");
  scanf("%f",&a);
  printf("Final value of x \n");
  scanf("%f",&b);
  printf("\nWhat is segment width? \n");
  scanf("%f",&h);

  //* computing the positionof initial and final values */
     n1 = (int)(fabs(a-x[1])/h+1.5);
     n2 = (int)(fabs(b-x[1])/h+1.5);

  /* Evaluating the integral */
     sum = 0.0;
     for(i=n1;i<=n2-1;i++)
		sum = sum + y[i] + y[i+1];
	 ict = sum * h/2.0;
	 printf("\nIntegral from %f to %f is %f\n",a,b,ict);

}
/* End Trapezoidal_TabulatedFunction() */

/*-----------------------------------------------------------------------------------*/

/*
Variables used
   n - Number of table points
   x - array of independent data points
   y - array of function values
   a - lower limit of integration
   b - upper limit of integration
   h - distance beteween independent values
   n1 - position of a in the table
   n2 - position of b in the table
   i1 - Area computed using simpson's rule
   i2 - Area of the last segment (by trapezoidal rule)
   ict - value of integral
*/

void OneThird_TabulatedFunction(){

  int n,n1,n2,i,m,l;
  float a,b,h,sum,ict,i1,i2,x[MAX],y[MAX];

  /* Reading table values*/
  printf("Number of data points\n");
  scanf("%d",&n);
  printf("\nInput table values, set by set \n");
  for(i=1;i<=n;i++)
	scanf("%f %f",&x[i],&y[i]);

  /* Reading the limits of integration */
  printf("Initial value of x \n");
  scanf("%f",&a);
  printf("Final value of x \n");
  scanf("%f",&b);
  printf("\nWhat is segment width? \n");
  scanf("%f",&h);

  //* computing the positionof initial and final values */
     n1 = (int)(fabs(a-x[1])/h+1.5);
     n2 = (int)(fabs(b-x[1])/h+1.5);

   /* Testing for even intervals */
   m = n2 - n1;
   if(m%2==0)/*m is even */
   {
   	i2 = 0.0;
   	l = n2-2;
   }
   else /* m is odd */
   {
   	/* Use trapezoidal rule for the last strip */
   	i2 = (y[n2-1]+y[n2])*h/2.0;
   	l = n2 -3;
   }

   /* Use Simpson's rule for 1 strips */
    sum = 0.0;
    for(i=n1;i<=l;i=i+2)
		sum = sum + y[i] + 4*y[i+1] + y[i+2];
	i1 = sum*h/3.0;

	/* Integral is sum of i1 and i2 */

	 ict = i1 + i2;

	 /* Writing the results */
	 printf("\nIntegral from %f to %f is %f\n",a,b,ict);

}
/* End OneThird_TabulatedFunction()*/
/*-----------------------------------------------------------------------------------*/

/*
Variables used
   n - Number of table points
   x - array of independent data points
   y - array of function values
   a - lower limit of integration
   b - upper limit of integration
   h - distance beteween independent values
   n1 - position of a in the table
   n2 - position of b in the table
   i1 - Area computed using simpson's rule
   i2 - Area of the last segment (by trapezoidal rule)
   ict - value of integral
*/

void ThreeEight_TabulatedFunction(){

    int n,n1,n2,i,m,l;
  float a,b,h,sum,ict,i1,i2,x[MAX],y[MAX];

  /* Reading table values*/
  printf("Number of data points\n");
  scanf("%d",&n);
  printf("\nInput table values, set by set \n");
  for(i=1;i<=n;i++)
	scanf("%f %f",&x[i],&y[i]);

  /* Reading the limits of integration */
  printf("Initial value of x \n");
  scanf("%f",&a);
  printf("Final value of x \n");
  scanf("%f",&b);
  printf("\nWhat is segment width? \n");
  scanf("%f",&h);

  //* computing the positionof initial and final values */
     n1 = (int)(fabs(a-x[1])/h+1.5);
     n2 = (int)(fabs(b-x[1])/h+1.5);

   /* Testing for multiple of 3 intervals */
   m = n2 - n1;
   if(m%3==0)/*m multiple of 3 */
   {
   	i2 = 0.0;
   	l = n2-2;
   }
   else /* m is rest */
   {
   	/* Use trapezoidal rule for the last strip */
   	i2 = (y[n2-1]+y[n2])*h/2.0;
   	l = n2 -3;
   }

   /* Use Simpson's rule for 1 strips */
    sum = 0.0;
    for(i=n1;i<=l;i=i+3){
		sum = sum + y[i] + 3*y[i+1] + y[i+3];
		if((i>n1)&& (i<l) && (i%3 !=0))
			sum = sum + 3*y[i+1];
    }
	i1 = sum*h*3/8.0;

	/* Integral is sum of i1 and i2 */

	 ict = i1 + i2;

	 /* Writing the results */
	 printf("\nIntegral from %f to %f is %f\n",a,b,ict);

}
/* End of ThreeEight_TabulatedFunction()*/

/*-----------------------------------------------------------------------------------*/
