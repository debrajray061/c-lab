#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return fact(n-1)*n;
}
int main(void)
{
	int n;
	printf("Enter a number");
	scanf("%d.",&n);
	printf("%d ",fact(n));
	return 0;
}
		
