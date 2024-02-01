// Fibonacci series 1  1   2    3    5 
#include<stdio.h>
#include<conio.h>
int main(){
	int a=1,b=1,c=0,n;
	printf("Enter a limit:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a=b;
		b=c;
		c=b+a;
		printf("%d\t",c);
	}
}
