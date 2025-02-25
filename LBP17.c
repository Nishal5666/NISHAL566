#include<stdio.h>
#include<math.h>
int main(){
	float v,b,h;
	printf("enter the area of pyramid:");
	scanf("%f",&b);
	printf("enter the height of pyramid:");
	scanf("%f",&h);
	v=b*h/3;
	printf("volume of pyramid %f",v);
	return 0;
}