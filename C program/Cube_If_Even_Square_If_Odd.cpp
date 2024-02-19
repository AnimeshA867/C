// Write a program to display cube if a number is even and display square if it is odd.
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n%2==0){
		a=n*n*n;
	}
	else if(n%2!=0){
	
	a=n*n;
}
	printf("\n %d",a);
}
