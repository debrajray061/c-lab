#include<stdio.h>
void main()
{
	int i,j;
	float ar[2][2];
	float arr[2][2];
	float sum[2][2];
	
	printf("Enter elements of matrix 1\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("Enter a%d%d ",i,j);
			scanf(" %f",&ar[i][j]);
		}
	}
	printf("Enter elements of matrix 2\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("Enter b%d%d ",i,j);
			scanf(" %f",&arr[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			 sum[i][j]=ar[i][j]+arr[i][j];
		}
	}
	printf("Sum of Matrices:\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%f ",sum[i][j]);
			if(j==2)
			printf("\n\n");
		}
	}
	}			
					
			
		
		
	
