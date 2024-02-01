#include<stdio.h>
void main(){
    int a,b,*sum,*x,*y;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    x=&a;
    y=&b;
    sum=&x +&y;
    printf("The sum of two numbers is %d",*sum);
}