#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("the sum is %d",sum);
	return 0;
	getch();
}