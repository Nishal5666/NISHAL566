#include<stdio.h>
#include<math.h>
int main(){
	int n,sum;
	printf("enter the number:");
	scanf("%d",&n);
	sum=n*(n+1)*(2*n+1)/6;
	printf("sum of squares is %d",sum);
	return 0;
}