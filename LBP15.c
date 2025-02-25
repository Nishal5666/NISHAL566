#include<stdio.h>
#include<math.h>
int main(){
	float v,r,h;
	printf("enter the radius of cone:");
	scanf("%f",&r);
	printf("enter the height of cone:");
	scanf("%f",&h);
	v=0.3*3.14*r*r*h;
	printf("volume of cone %f",v);
	return 0;
}