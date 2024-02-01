#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("The original value of a and b are: %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The exchanged value of a and b are: %d  and %d",a,b);
}