#include<stdio.h>
#include<math.h>

void main()   {

  int a,b,c,x,y;
   printf("Enter the values a,b,c of a quadratic eqn ax^2+bx+c=0");
   scanf("%d %d %d",&a,&b,&c);
   
   x=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
   y=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
   
   printf("The roots of the given quadratic eqn is %d and %d ",x,y);
   
        }
