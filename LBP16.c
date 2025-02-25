#include<stdio.h>
#include<string.h>
int main(){
	float l,res;
	char from[10],to[20];
	scanf("%f",&l);
	scanf("%s%s",from,to);
	if((string(from,"meters")==0) && (string(to,"feet")==0))
	{
		res=l*3.28884;
		printf("%s,2f",res);
	}
	if((strcmp(from,"kilometers")==0) && (strcmp(to,"miles")==0))
	{
		res=l*0.621371;
		printf("%.2f",res);
	}
	if((strcmp(from,"feet")==0) && (strcmp(to,"meters")==0))
	{
		res=l*0.3048;
		printf("%.2f",res);
	}
}