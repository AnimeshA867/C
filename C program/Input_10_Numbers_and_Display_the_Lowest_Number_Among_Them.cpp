// Write a program to read five positive nuber using array and find out the smallest among them.
#include<stdio.h>
#include<conio.h>
int main(){
	int n[10],t;
	for(int i=0;i<10;i++){
		printf("Enter any number:");
		scanf("%d",&n[i]);
	}
	for(int i=0;i<10;i++){
		printf("%d\t ",n[i]);
	}
	t=n[0];
	for(int i=0;i<10;i++){
			
			if(t>n[i]){
				t=n[i];
			}else{
				continue;
			}
		}
	printf("The smallest number among them is:%d",t);
	return 0;
}
