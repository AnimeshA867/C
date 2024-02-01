/*
program using function to calculate and return sum of following series up to n terms; where
x and n are supposed as passed by main program; sum = x-x2 +x3-x4+..…
*/
#include<stdio.h>
#include<math.h>
void main(){
    int x,n;
    float sum=0;
    printf("Enter the value of x and n respectively:");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i-1)*pow(x,i);
    }
    printf("The sum of the series is %.2f",sum);
}