#include<stdio.h>
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }else if(n==0){
        return 0;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
void main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        printf("%d\t",fibo(i));
    }
}