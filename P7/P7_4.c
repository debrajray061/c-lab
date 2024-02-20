#include<stdio.h>
void main()
{
	int n=1,s=0;

	printf("Enter 10 numbers\n");
	
	while(n<10)
	{
	int num;
		scanf("%d ",&num);
		s=s+num;
		n=n+1;
	}
	printf("Sum=%d\n",s);
	printf("Average=%f ",s/10);
}	
