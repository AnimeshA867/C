/*
Write a program to manipulate the string using Library functions such as strlen, strrev,
strcmp, strcat, strcpy of headerfile string.h.(Make different programs for different
functions).
*/
#include<stdio.h>
#include<string.h>
void stcpy(char str[80]){
    char str2[80];
    strcpy(str2,str);
    printf("%s",str2);
}
void stlen(char str[80]){
   printf("The length of the string is %d",strlen(str));
}
void strev(char str[80]){
    printf("The original string is %s\n",str);
    printf("The string reversed is %s",strrev(str));
}
void stcat(char str[80],char str2[80]){
    char str3[80];
    strcpy(str3,strcat(str,str2));
    // strcpy(str2,str);
    printf("The concated string is %s",str3);
}
void stcmp(char str[80],char str2[80]){
    printf("%d",strcmp(str,str2));
}
void main(){
    char str[80],str2[80];
    printf("Enter a string:");
    gets(str);printf("Enter a string:");
    gets(str2);
    stcmp(str,str2);
}