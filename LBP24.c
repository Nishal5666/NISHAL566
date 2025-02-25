#include<stdio.h>
int main(){
	int n,digit,count=0,rem;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter a digit to count");
	scanf("%d",&digit);
	while(n>0)
	{
		rem=n%10;
		if(rem==digit)
		{
			count++;
		}
		n=n/10;
	}
	printf("the digit %d occurs %d time",digit,count);
}