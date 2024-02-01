#include<stdio.h>
#include<string.h>
int main(){
    char name[15];
    printf("Enter a string:");
    gets(name);
    int i;
    for( i=strlen(name);i>=0;i--){
        printf("%c",name[i]);
    }
}