#include<stdio.h>

void main()   {
 
   int m;
   printf("Enter a month in order");
   scanf("%d",&m);
   
   if(m%2==1 || m==8 || m==10 || m==12) 
     printf("31 days");
   else if(m==2)
     printf("28/29 days");
   else
     printf("30 days"); 
   
         }   
