#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str1[25],str2[25];
    int l;
    printf("Enter an string:");
    gets(str1);
    printf("Enter an string:");
    gets(str2);
    printf("%s",strcat(str1,str2));
}