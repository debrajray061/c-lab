#include<stdio.h>
void main()
{
    int n,l,a=2,b=1,c=0,i;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("2");
    printf(" 1");
    c=a+b;
    for(i=1;i<n;i++)
    {
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}
