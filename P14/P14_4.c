#include<stdio.h>
void even(int n1,int n2)
{
	if(n2<n1)
	return;
	printf("%d ",n1);
	even(n1+2,n2);
}
void odd(int n1,int n2)
{
	if(n2<n1)
	return;
	printf("%d ",n2);
	odd(n1+2,n2);
}
int main(void)
{
	int n1,n2;
	printf("Enter the range ");
	scanf("%d%d",&n1,&n2);
	printf("The even nos. from %d to %d are ",n1,n2);
	even(n1,n2);
	printf("\n");
	printf("The odd nos. from %d to %d are ",n1,n2);
	even(n1+1,n2);
}
	
