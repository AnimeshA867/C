#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    fp=fopen("haha.dat","r");
    if(fp==NULL){
        printf("Error openning the file.");
        exit(1);
    }else{
        char s[200];
        fgets(s,200,fp);
        printf("%s",s);
    }
}