//Greatest using the pointer
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,*x,*y;
	printf("Enter any two number:");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	if(*x>*y){
		printf("%d is the greatest",*x);
	}
	else{
		printf("%d is the greatest",*y);
	}
	return 0;
}
