#include<stdio.h>
int SqSum(int n){
    // int a=1;
    if(n==0){
        return 0;
    }
    else{
        return n*n+SqSum(n-1);
    }
}
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",SqSum(n));
}