//Finding factorial of a number by using recursion
// Recursion is a process of finding result by calling method repeatdly.
#include<stdio.h>
#include<conio.h>'
long int fact(int n){
	if(n==0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
int main(){
	int a=fact(5);
	printf("%d",a);
}
