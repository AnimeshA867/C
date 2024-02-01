//Program to find Fibonacci series up to n terms using recursive function.
#include<stdio.h>
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return fibo(n-1)+fibo(n-2);
}
void main(){
    int n;
    printf("Enter the value of n to find the nth term of the fibonacci series : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
}