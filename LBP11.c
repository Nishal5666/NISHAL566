#include<stdio.h>
#include<math.h>
int main()
{
	int area,a;
	printf("enter the side of a triangle");
	scanf("%d",&a);
	area=sqrt(3)/4*a*a;
	printf("area of triangle is %d",area);
	return 0;
	
}