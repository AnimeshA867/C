//To print factorial of a number:
#include<stdio.h>
#include<conio.h>
int main(){
	int n,f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		f*=i;
	}
	printf("The factorial of the %d is: %d",n,f);
}
