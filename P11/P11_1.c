#include<stdio.h>

void main()	{
	
	int n,i,j;
	printf("Enter array size:");
	scanf("%d",&n);
	int ar[n];
	
	for(i=1;i<=n;i++)
	{
		printf("Enter number%d:",i);
		scanf("%d",&ar[i]);
	}
	printf("Array contents are:\n");
	for(j=1;j<=n;j++)
	{
		printf("%d ",ar[j]);
		
	}
	
	}
