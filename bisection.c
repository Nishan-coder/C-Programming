#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.00001
#define f(x) (x*x*x-4*x+1)
int main()
{
   float x0,x1,x2;
   float f0,f1,f2;
   int i=0;
   printf("enter the values of x0 and x1\n");
   scanf("%f %f",&x0,&x1);
   do
    {
    f0=f(x0);
   f1=f(x1);
   x2=(x0+x1)/2;
   f2=f(x2);
   if(f0*f2<0)
   {
       x1=x2;
   }
   else
    {
    x0=x2;
   }
   i++;
   printf("the number of iterations is: %d\t",i);
   printf("the root is: %f\n",x2);
   }while(fabs(f2)>e);
   return 0;
}

