#include<stdio.h>
int a=0;
int rev(int n){
    if(n==0){
        return a;
    }else{
        a=a*10+n%10;
        return rev(n/10);
    }
}
int rev_loop(int n){
    a=0;
    while(n!=0){
        a=a*10+n%10;
        n/=10;
    }
    return a;
}
void main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("%d is the reverse with the use of recursion in a function.\n",rev(n));
    printf("%d is the reverse with the use of loop.",rev_loop(n));
}