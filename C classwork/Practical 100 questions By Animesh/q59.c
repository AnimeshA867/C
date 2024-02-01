#include<stdio.h>
int prod(int n){
    if(n<=1){
        return 1;
    }else{
        return n*prod(n-1);
    }
}
void main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The product of first n natural numbers is %d",prod(n));
}