//Program to find fibonacci series up to n terms using recursive function
#include<stdio.h>
int fibo(int n){
      if(n==0){
    return 0;
   }
   else if(n==1||n==2){
    return 1;
   }else{
    return fibo(n-1)+fibo(n-2);
   }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\t",fibo(i));
    }
    // printf("%s\t",__DATE__);
}