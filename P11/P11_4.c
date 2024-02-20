#include<stdio.h>

void main()	{
	
	int n,i,l=0;
	printf("Enter array size:");
	scanf("%d",&n);
	int ar[n];
	
	
	for(i=1;i<=n;i++)
	{
		printf("Enter number%d:",i);
		scanf("%d",&ar[i]);
	
		if(ar[i]>l)
		l=ar[i];
	}
	printf("Largest element stored in the array is:%d",l);
	
	
	}
