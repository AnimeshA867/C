#include<stdio.h>
#include<conio.h>
int greater(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int a,b,high;
	printf("Enter numbers:");
	scanf("%d %d",&a,&b);
	high=greater(a,b);
	printf("The higher number is:%d",high);
}
