#include<stdio.h>
long int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
void main(){
    int n;
    long int fact1;
    printf("Enter a number:");
    scanf("%d",&n);
    fact1=fact(n);
    printf("%ld",fact1);
}