#include<stdio.h>
int sum(int n){
    if(n<1){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
void main(){
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    printf("The sum of natural number upto %d is %d",n,sum(n));
}