#include<stdio.h>

void max(int *a, int *b, int * max){
    if(*a>*b){
        *max=*a;
    }else{
        *max=*b;
    }
}

void main(){
    int a,b,maxVal;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    max(&a,&b,&maxVal);
    printf("The maximum value among %d and %d is %d",a,b,maxVal);
}