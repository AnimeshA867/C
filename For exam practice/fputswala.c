#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    fp=fopen("haha.dat","a+");
    if(fp==NULL){
        printf("Error opening the file.");
        exit(1);
    }else{
        char s[200];
        // printf("Enter a string:");
        // gets(s);
        // fputs(s,fp);
        // char c;
        // printf("Enter a character:");
        // c=getchar();
        // fputc(c,fp);
        // fseek(fp,0,2);
        rewind(fp);
        int n=ftell(fp);
        printf("%d",n);
        fclose(fp);
    }
}