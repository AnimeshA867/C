// void 
#include<stdio.h>
void sum(float a,float b,float c){
	float sum=a+b+c;
	printf("The sum of %.2f %.2f and %.2f is : %.2f",a,b,c,sum);
}
int main(){
	float a,b,c;
	printf("Enter any three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	sum(a,b,c);
}
