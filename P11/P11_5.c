#include <stdio.h>
void main()
	{
	
	printf("Enter the no. of elements");
	int n ;
	scanf("%d",&n);
	int ar[n];
	printf("Enter array");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("Enter the elements to be inserted");
	int nu;
	scanf("%d",&nu);
	
	printf("Enter position");
	int pos;n++;
	scanf("%d",&pos);
	
	for (int i = n - 1; i >= pos; i--)
	{
   		ar[i] = ar[i - 1];
   		ar[pos - 1]=nu;
   	}
	for (int i = 0; i < n; i++)
	{
   		printf("%d ", ar[i]);
        }
        }
