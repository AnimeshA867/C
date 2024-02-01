//To find the factorial
#include<stdio.h>
#include<conio.h>
int main(){
	int a,*x,fact=1;
	printf("Enter a number:");
	scanf("%d",&a);
	x=&a;
	for(int i=1;i<=*x;i++){
		fact*=i;
	}
	printf("The factorial of %d=%d",a,fact);
	return 0;
}
