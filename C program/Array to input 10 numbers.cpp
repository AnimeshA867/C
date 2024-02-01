// Write a program to input any 10 number in an array and display it. Find the biggest number among the input.
#include<stdio.h>
#include<conio.h>
int main(){
	int n[10],t=n[0];
	for(int i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&n[i]);
	}
	for(int i=0;i<10;i++){
		printf("%d\t",n[i]);
	}
	
	for(int i=0;i<10;i++){
			if(n[i]>t){
				t=n[i];
			}
			
	}
	printf("\n The highest number is: %d",t);
	return 0;
}
