#include<stdio.h>
void main()	{

	int c,n;
	printf("Enter the class obtained by the student");
	scanf("%d",&c);
	printf("Enter the number of subjects the student failed in");
	scanf("%d",&n);
	
	switch(c)
	{
		case 1:
			if(n>3){
			printf("no grace marks");}
			else if(n<=3)
			printf("Grace marks is %d",n*5);
		
			break;
		case 2:
			if(n>2){
			printf("no grace marks");}
			else if(n<=2)
			printf("Grace marks is %d",n*4);
			break;
		case 3:
			if(n>1){
			printf("no grace marks");}
			else if(n=3)
			printf("Grace marks is %d",n*5);
			break;
		default:
			printf("Invalid choice");
	}
}
