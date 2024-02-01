//Program to check whether given number is prime number or not;
#include<stdio.h>
#include<conio.h>
int main(){
	int number,count;
	printf("Enter the number:");
	scanf("%d",&number);
	count=0;
	for(int i=2;i<=number/2;i++){
		if(number%i==0){
			count++;
			break;
		}
	}
	if(count==0&&number!=1){
		printf("Yes, the number is prime number.");
	}
	else{
		printf("No, the number is not prime number.");
	}
}
