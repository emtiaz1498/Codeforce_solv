#include <stdlib.h> // For random(), RAND_MAX
#include<stdio.h>
#include<math.h>
#define total 1200

int checkvalue(int r, float x, float y)
{
float dis,d;
int count = 0;
//Considering center as (0,0) as per the example
dis = x*x + y*y;
d = r*r;
if(dis == d)
{
printf("\nPoint is on the circle\n");
return 1;
}
else
{
if(dis>d)
{
printf("Point is outside the circle\n");
return 0;
}
else
{
printf("Point is inside the circle\n");
return 1;
}

}

return 0;
}

void main()
{
int max = 1, min = -1,r,p,count = 0;
float x[total], y[total],pi;
//Radius given is 1
r = 1;
for(int i = 0; i< total; i++)
{
x[i] = (2 * ((float)rand()/RAND_MAX) - 1) ;
}
for(int i = 0; i< total; i++)
{
y[i] = (2 * ((float)rand()/RAND_MAX) - 1) ;
}
printf("Point are :");
for(int i = 0; i< total; i++)
{
printf("(%f,%f)\n", x[i],y[i]);
}
for(int i = 0; i< total; i++)
{
p = checkvalue(r,x[i],y[i]);
if (p == 1)
{
printf("Point : (%f,%f)\n",x[i],y[i]);
count = count + 1;
}
}
printf("count = %d", count);
pi = (float) 4 * (count / (total * 1.0));
printf("\nThe value of pi : %f ", pi);
}
