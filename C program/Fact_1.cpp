#include<stdio.h>
#include<conio.h>
int main(){
int number,count;
for(number=1;number<=100;number++){
	count=0;
	for(int i=2;i<=number/2;i++){
		if(number%i==0){
			count++;
			break;
		}
	}
	if(count==0&&number!=1){
		printf("%d   ",number);
	}
	}
}
