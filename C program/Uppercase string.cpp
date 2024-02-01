// A program to change from lowercase to uppercase.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[50],upr[59];
	printf("Enter a string.:");
	gets(str1);
	printf("%s",strupr(str1));
}
