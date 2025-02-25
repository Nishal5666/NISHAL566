#include<stdio.h>
#include<math.h>
int main(){
	float A,a,b,c,s;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%f",&c);
	s=a+b+c/2;
	A=sqrt(s)*(s-a)*(s-b)*(s-c);
	printf("area of triangle %f",A);
	return 0;
}