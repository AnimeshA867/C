#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// #include<conio.h>
void main(){
    int n;
	printf("Enter the number of list of people:");
	scanf("%d",&n);
	char name[n][25];
	fflush(stdin);
	for(int i=0;i<n;i++){
		printf("Enter the name of the student:");
		gets(*(name+i));
	}
	int a=0;
	char search[25];
	printf("Enter the name of the student to search:");
	gets(search);
	for(int i=0;i<n;i++){
		if(strcmp(*(name+i),search)==0){
			printf("The name %s has been found.",search);
			a=0;
			break;
		}else{
			a++;
		}
	}
	if(a!=0){
		printf("The name %s has not been found.", search);
	}
}
