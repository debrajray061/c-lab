#include<stdio.h>

void main()   {
 
 int a,b,c;
 printf("Enter the three sides of a triangle");
 scanf("%d %d %d",&a,&b,&c);
 
 if((a+b)>c && (b+c)>a && (c+a)>b)
   printf("the triangle is valid");
 else
   printf("The triangle is not valid");
   
       }  
