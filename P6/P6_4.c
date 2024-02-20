#include<stdio.h>

void main()   {
 
  int a,b,c,l;
  printf("Enter three numbers");
  scanf("%d %d %d",&a,&b,&c);
  
  l=a;
  
  if(b>l)
    l=b;
  if(c>l)
    l=c;
  printf("The largest number is %d",l);
  }  
