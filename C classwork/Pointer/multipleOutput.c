#include<stdio.h>
void sd(int a,int b,int *sum,int *diff){
    *sum=a+b;
    *diff=a-b;
}
void main(){
    int a,b,sum,diff;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    sd(a,b,&sum,&diff);
    printf("The sum is %d\n and the difference is %d",sum,diff);
}