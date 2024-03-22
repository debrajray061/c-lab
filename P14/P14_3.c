#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return sum(n-1)+n;
}
int main(void)
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%d ",sum(n));
	return 0;
}
