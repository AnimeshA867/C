/*
Write a program to detect all vowels from a sentence. Assume that the sentence is not
more than 80 characters long. */
#include<stdio.h>
#include<string.h>
void main(){
    char str[80];
    int vowel=0;
    printf("Enter a sentence:");
    scanf( "%80[^\n]",str);
    for(int i=0;i<strlen(str);i++){

    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
    }
    printf("The total number of vowels in the sentence is %d",vowel);
}