#include<stdio.h>
#include<conio.h>
int main(){
	int array[15];
	for(int i=1;i<=5;i++){
		printf("Enter the marks of student %d:\n ",i);
		scanf("%d",&array[i]);
	}
	for(int i=1;i<=5;i++){
		printf("%d\n",array[i]);
	}
}
