#include<stdio.h>
void natural(int n)
{
	if(n<=50)
	printf("%d ",n);
	else 
	return;
	natural(n+1);
}
int main()
{
	printf("The first 50 natural nos. are ");
	natural(1);
	return 0;
}

