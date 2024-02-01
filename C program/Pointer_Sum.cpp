#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,*x,*y,*s;
	printf("Enter any two numbers: ");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	s=(*x)+(*y);
	printf("The sum of %d and %d is %d",*x,*y,*s);
	return 0;
}
