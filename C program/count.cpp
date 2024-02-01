
//Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between ) and 100. The program shoudl also count and display the numbers of such values.
#include<stdio.h>
#include<conio.h>
int main(){
	int count=0;
	for(int i=0;i<=100;i++){
		if(i%6==0 && i%4!=0){
			count++;
			printf("%d\t",i);
		}
	}
	printf("\n The number of numbers that are divisible by 6 and not divisible by 4 are: %d",count);
}
