#include<stdio.h>
void main()	{

	int n,i,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		s=s+1;
	}
	
	if(s==0)
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
	
	}
