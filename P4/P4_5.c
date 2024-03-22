#include<stdio.h>

void main()
{
int a, b, c;
printf("Enter two integers");
scanf("%d %d", &a, &b);
c=b;
b=a;
a=c;
printf("Swapped integers:%d %d",a,b);
}


