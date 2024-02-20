#include<stdio.h>
void main()	{

	int a,b,i,gcd,lcm;
	printf("Enter two number");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	lcm=(a*b)/gcd;
	
	printf("The lcm and gcd of the given numbers are: %d and %d",lcm,gcd);
	
	}	
