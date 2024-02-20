#include<stdio.h>

void main()    

{

int sec,s,h,m;

printf("Enter a time in seconds");
scanf("%d",&sec);

h=sec/3600;
m=(sec%3600)/60;
s=sec%60;

printf("%d seconds=%d Hour %d minutes %d seconds",sec,h,m,s);
}


