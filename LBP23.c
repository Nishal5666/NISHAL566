#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t;
	printf("enter the number:\n");
	scanf("%d",&n);
    if(n>0){
    	t=n/6;
	printf("free cups is %d\n",t);
	printf("final number of cups=%d",t+n);
}
	getch();
	return 0;
}