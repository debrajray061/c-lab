#include<stdio.h>
void main()	{

	int n,a,s=0,p=1,i,d;
	printf("Enter a number");
	scanf("%d",&n);
	
	a=n;
	while(a>0)
	{
	        d=a%10;
		for(i=1;i<=d;i++)
		{
			p=p*i;
		}	
	s=s+p;
	a=a/10;
	p=1;
	}
	if(n==s)
	{
		printf("The given number is a strong number");
	}
	else
	{
		printf("The given number is not a strong number");
	}
	
	}
