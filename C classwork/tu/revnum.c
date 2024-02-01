#include<stdio.h>
void main(){
    int n,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    // int temp=n;
    do{
        a=a*10+n%10;
        n/=10;
    }while(n!=0);
    printf("%d\n",a);
}