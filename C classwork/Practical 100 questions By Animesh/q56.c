/*
program to calculate factorial of a number using recursive function and the same program
without using recursive function.
*/
#include<stdio.h>
int fact_rec(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*fact_rec(n-1);
    }
}
void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
   printf("The factorial of %d is %d",n,fact);
}
void main(){
    int n;
    printf("Enter a number to find factorial:");
    scanf("%d",&n);
    printf("The factorial of %d with the use of recursion is %d\n",n,fact_rec(n));
    fact(n);
    
}