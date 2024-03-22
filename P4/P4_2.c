#include<stdio.h>

void main()
{
float f,c;
printf("Enter a temperature in centigrade");
scanf("%f",&c);
f=((9.0/5.0)*(c))+32.0;
printf("The temperature %f in centigrade is %f in Fahrenheit ",c,f);
}

