#include<stdio.h>
void main(){
    float sum=0;
    int n;
    printf("Enter an integer to find the sum of the digits:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("The sum of the digits of the integer %d is %f",temp,sum);
}