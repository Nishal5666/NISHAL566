#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("the number of ways are %d",fib(n));
	scanf("%d",&n);
	return 0;
}
int fib(int n){
	if(n==0||n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
