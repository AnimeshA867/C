#include<stdio.h>
#include<conio.h>
#include<string.h>
void sum(int x,int y){
	printf("The sum of %d + %d = %d \n",x,y,x+y);
}
void dif(int x,int y){
printf("The difference between %d - %d : %d \n",x,y,x-y);
}

void pro(int x, int y){
	printf("The product of %d and %d is: %d\n",x,y,x*y);
}
int main(){
	int a,b,c;
	char k[25];
	printf("Enter any two number:");
	scanf("%d %d",&a, &b);
	// printf("For Sum Press A, For Difference Press B");
	// scanf("%s",k);
	sum(a,b);
	dif(a,b);
	pro(a,b);
}
