//Write a program In c to add two numbers using pointers

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a,sum;
    a=(int *)calloc(2,sizeof(int));
    printf("Enter any two numbers:");
    scanf("%d %d",a,a+1);
    sum= *a+*(a+1);
    printf("The sum of %d and %d is %d",*a,*(a+1),sum);
}