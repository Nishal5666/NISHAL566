#include<stdio.h>
int main(){
	int n,even,odd,weird,notweird;
	printf("enter a number");
	scanf("%d",&n);
	if(n%2==0){
		if(1<=n<=5){
			printf("not weird");
		}
		else if(6<=n<=20){
			printf("weird");
		}
		else if(n>20)
		{
			printf("not weird");
	}
	}
	else {
		printf("weird");
	}
}
