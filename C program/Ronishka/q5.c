//Write a program in C  to add numbers using call by reference

#include<stdio.h>

void sum(int* a, int *b, int* sum){
    *sum=*a+*b;
}

void main(){
    int a,b,s;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    sum(&a,&b,&s);
    printf("The sum of %d and %d is %d",a,b,s);
}