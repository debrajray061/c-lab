#include<stdio.h>

void main()
{
	int i,j,m,n,arr;
	printf("Enter the no. rows and columns of a martrix");
	scanf("%d %d",&m,&n);
	int ar[m][n];
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("Enter a%d%d ",i,j);
			scanf(" %d",&arr);
			ar[i][j]=arr;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",ar[i][j]);
		}
	printf("\n");
	}
}					
