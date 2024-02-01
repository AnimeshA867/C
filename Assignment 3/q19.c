/*
Write a program that reads character and perform following operation according to the
choice inputted by the user.
a. Displays “it is vowel” if entered character is vowel otherwise “it is consonant”.
b. Displays “it is digit” if entered character is member of digit, otherwise display the
ASCII value of entered character. */
#include<stdio.h>
void main(){
    char a;
    printf("Enter any character:");
    scanf(" %c",&a);
    if(a>=65&a<=90||a>=97&&a<=122){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant.");
        }
    }
    else if(a>=48&&a<=57){
        printf("Digits.");

    }else{
        printf("%d",a);
    }
}