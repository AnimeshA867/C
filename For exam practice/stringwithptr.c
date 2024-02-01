#include<stdio.h>
void main(){
    char str[3][30];
    for(int i=0;i<3;i++){
        printf("Enter a string:");
        gets(*(str+i));
    }
    for(int i=0;i<3;i++){
        printf("%s",*(str+i));
    }
}