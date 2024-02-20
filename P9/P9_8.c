#include <stdio.h>
void main()	{

    int a=0,b=1,c=1,i=4,n,s; 
    printf("Enter the value of n"); 
    scanf("%d",&n);
    
    printf("%d %d %d ",a,b,c);
    
    for(i=4;i<=n;i++)
    {
      s=a+b+c;
      printf("%d ",s);
      a=b;
      b=c;
      c=s;
    
      
    }    
     
}
