#include<stdio.h>
#include<stdlib.h>
void main(){
    static int n;
    printf("Animesh\t");
    n++;
    if(n==10){
    }
    else{
        main();
    }
}