//Write an algorithm for a program that input cost price and selling price and determine whether there is gain or loss. Convert this algorithm into program code
#include<stdio.h>
#include<conio.h>
int main(){
	int cp,sp,profit,loss;
	printf("Enter Cost price of the item:");
	scanf("%d",&cp);
	printf("Enter Selling price of the item:");
	scanf("%d",&sp);
	if(cp==sp){
		printf("There is no profit or loss.");
	}
	else if(cp<sp){
		profit=sp-cp;
		printf("The profit from the sale is:%d",profit);
	}
	else{
		loss=cp-sp;
		printf("The loss from the sale is:%d",loss);
	}
	return 0;
}
