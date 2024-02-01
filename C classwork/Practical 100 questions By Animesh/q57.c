// program to calculate b n using recursive as well as non recursive function.
#include<stdio.h>
int power(int n,int i){
    if(i<=0){
        return 1;
    }else{
        return n*power(n,i-1);
    }
}
int powe(int n, int i){
    int p=1;
    while(i>0){
        p*=n;
        i--;
    }
    return p;
}
void main(){
    int n,p;
    printf("Enter the value of b:");
    scanf("%d",&n);
    printf("Enter the value of n:");
    scanf("%d",&p);
    printf("With recursion:\t%d^%d is %d\n",n,p,power(n,p));
    printf("Without recursion:\t%d^%d is %d",n,p,powe(n,p));
}