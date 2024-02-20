#include<stdio.h>

void main()	{
	
	int n,i,j;
	float s=0.0;
	printf("Enter array size:");
	scanf("%d",&n);
	int ar[n];
	
	for(i=1;i<=n;i++)
	{
		printf("Enter number%d:",i);
		scanf("%d",&ar[i]);
		s=s+ar[i];
	}
	printf("Average of numbers stored in the array is:\n");
	
		printf("%f ",s/n);
		
	
	}
