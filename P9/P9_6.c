#include<stdio.h>
void main()	{

	int n,p=1,i;
	printf("Enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	
	printf("The factorial=%d",p);
	
	}
