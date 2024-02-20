#include<stdio.h>

void main() 
   
{

int d,k,m;

printf("Enter a distance in meters");
scanf("%d",&d);

k=d/1000;
m=d%1000;

printf("%d meter= %d Km %d meters",d,k,m);
}
