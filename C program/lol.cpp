#include<stdio.h>
#include<conio.h>
int main(){
	long int a=2,b;
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
//		a=2;
		b=a*a;
		a=b;
	}
	printf("%d",a);
}
