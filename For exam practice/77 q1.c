//Write a program to find sum and average of first n natural numbers.
#include<stdio.h>
void main(){
    int sum=0,average;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    average=sum/n;
    printf("The sum of first n natural numbers is %d\n",sum);
    printf("The average of first n natural number is %d",average);
}