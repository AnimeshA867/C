//Write a program C that accepts a string from the user and check if it is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[500],rev[500];
	printf("Enter a string:");
	gets(str1);
	for(int i=0;i<strlen(str1);i++){
	rev[i]=strrev(str1[i]);
}
	if(strcmp(str1,rev)=true){
		printf("The string is palindrome.");
	}
//	printf("%d",result);
}
