#include<stdio.h>
#include<conio.h>
int main(){
    int roll;
    char name[25];
    FILE *fp;
    fp=fopen("input.txt","r");
    fscanf(fp,"%s\t %d\n",name,&roll);
    printf("%s \t %d\n",name,roll);
}