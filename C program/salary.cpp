//Write a program that will read the value of x and evaluate the following functions.
#include<stdio.h>
#include<conio.h>
//DEFINE Math
int main(){
	int x;
	printf("Enter the value of x:");
	scanf("%d",&x);
	int a<40;
	int b>40;
	switch(x){
	case a:
		printf("4x + 100");
		break;
	case 40:
		printf("300");
		break;
	case b:
		printf("4.5x + 150");
		break;
	default:
		printf("Error.");
	}
}
