#include<stdio.h>
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}
void main(){
    int n;
    printf("Enter the limit upto which the fibonacci series is to go:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\t",fibo(i));
    }
    printf("\n");
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++){
        printf("%d\t",c);
        c=a+b;
        b=a;
        a=c;
    }
}