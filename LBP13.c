#include<stdio.h>
#include<conio.h>
int main()
{
	int ke,m,v;
	printf("enter the mass and velocity :\n");
	scanf("%d%d",&m,&v);
	ke=0.5*m*v*v;
	printf("the sum is %d",ke);
	return 0;
	getch();
}