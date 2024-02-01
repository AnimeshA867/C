//Write a program to read and print data stored in a file input.txt
#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("input.txt","r");
    char string[200];
    fgets(string,200,fp);
    printf("The data stored in the data is: %s",string);
}