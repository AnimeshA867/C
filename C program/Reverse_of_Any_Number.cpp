//Reverse of any number
#include<stdio.h>
#include<conio.h>
int main(){
	int n,len=0,a,d=0;
	printf("Enter a number:");
	scanf("%d",&n);
	do{
		a=n%10;
		d=d*10+a;
		n=n/10;
		
	}while(n!=0);
	printf("%d",d);
}
