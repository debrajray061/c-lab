#include<stdio.h>
void main()	{

	int n,i,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	
	if(s==n)
	printf("The number is perfect");
	else
	printf("The number is not perfect");
	
	}
