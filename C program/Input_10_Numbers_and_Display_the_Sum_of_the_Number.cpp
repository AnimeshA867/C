//Wite a program to imput 10 interger numbers innto an array and display the sum of the number:
#include<stdio.h>
#include<conio.h>
int main(){
	int n[10],sum=0;
	for(int i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&n[i]);
	}
	for(int i=0;i<10;i++){
		sum+=n[i];
	}
	printf("The sum of the numbers is: %d",sum);
//	return 0;
}
