#include<stdio.h>

void main()   
 
{

float bp,sp,mp,d,l;

printf("SET 1\n");
printf("Enter the buying price\n");
scanf("%f",&bp);
printf("Enter the marker price\n");
scanf("%f",&mp);
printf("Enter the discount\n");
scanf("%f",&d);

sp=mp-((d/100)*mp);
l=sp-bp;

printf("The profit or loss percentage is %0.3f \n",(l/bp)*100);
}
