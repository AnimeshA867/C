#include <stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr;
    ptr = fopen("haha.dat", "r");
    char c;
    if(ptr==NULL){
        printf("Error opening the file.");
        exit(1);
    }else{

    while (1){
    c=fgetc(ptr);
     if(c==EOF){
        break;
     }
     putchar(c);
     
     }
    }
    fclose(ptr);

    }
