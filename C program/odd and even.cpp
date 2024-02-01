//Write a program to compute the sum of even numbers and odd numbers separately from 1 to 100 using any of the loops.
#include<stdio.h>
#include<conio.h>
int main(){
	int odd=0,even=0;
	for(int i=0;i<=100;i++){
		if(i%2!=0){
			odd+=i;
		}
		else{
			even+=i;
		}
	}
	printf("The sum of odd numbers are: %d \n",odd);
	printf("The sum of even numbers are: %d", even);
}
