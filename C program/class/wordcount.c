//WAP to check the vowel and consonant letter of the string/s and count the no of vowel and consonant letter in given string/s.
#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char str[max];
    int vowel=0,con=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'|| str[i]=='A'|| str[i]=='E'|| str[i]=='e'|| str[i]=='I' || str[i]=='i'|| str[i]=='O'|| str[i]=='o'|| str[i]=='U' ||str[i]=='u'){
            vowel++;
        }
        else if(str[i]==' '){
            continue;
        }
        else{
            con++;
        }
    }
    printf("The total number of vowel alphabet in the string is %d\n",vowel);
    printf("The total number of consonant letter of the strin is %d",con);
}