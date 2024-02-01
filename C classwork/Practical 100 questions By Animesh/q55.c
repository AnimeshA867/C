/*
A five digit positive integer is entered through the keyboard; write program using function to
calculate the sum of the digits of the number. The function should receive the integer from
main () and output also be printed through main ().
*/
#include<stdio.h>
int sum(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
void main(){
    int n;
    printf("Enter an integer number:");
    scanf("%5d",&n);
    printf("The sum of the digits of %d is %d",n,sum(n));
}