#include<stdio.h>
int main()
{
	int n,i,ct=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n>0){
		if(n==1)
		ct++;
		else{
		for(i=2;i<n/2;i++)
			{
				if(n%i==0)
				ct++;
			}
		}
		if(ct==0)
		printf("yes");
		else if(ct){
			printf("no");
		}
		else{
			printf("enter positive number");
		}
	}
}
