#include<stdio.h>
int main(){
	float  percentage,totalmarks,marksobtained;
	printf("enter the total marks:");
	scanf("%d",& totalmarks);
	printf("enter the marks obtained:");
	scanf("%d",&marksobtained);
	percentage=(marksobtained/totalmarks)*100;
	printf("percentage of student is %f",percentage);
	return 0;
}