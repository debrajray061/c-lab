#include<stdio.h>

void main()    

{
int n,f,l,s;

printf("enter a six digit number");
scanf("%d",&n);

f=n/100000;
l=n%10;
s=f+l;

printf("sum of the digits %d",s);
}
