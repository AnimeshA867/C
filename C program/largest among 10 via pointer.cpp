#include<stdio.h>
#include<conio.h>
int main(){
	int num,*n;
	for(int i=0;i<10;i++){
		printf("Enter any number:");
		scanf("%d",(n+i));
	}
	num=*(n+0);
	for(int i=0;i<10;i++){
		if(*(n+i)>num){
			num=*(n+i);
		}
	}
	printf("The greatest number is:%d",num);
	return 0;
}
