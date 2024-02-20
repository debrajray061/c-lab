#include<stdio.h>

void main()    

{
int n,s,f,m,l;

printf("Enter a three digit number");
scanf("%d",&n);

f=n/100;
m=(n/10)%10;
l=(n%10);
s=f+m+l;

printf("Sum of digits %d",s);
}
