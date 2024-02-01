// Sum of number using recursion function
#include<stdio.h>
#include<conio.h>
int function(int n){
	if(n<0||n==0){
		return 0;
	}
	else{
		return n+function(n-1);
	}
}

int main(){
	int n=function(100);
	printf("%d",n);
}
