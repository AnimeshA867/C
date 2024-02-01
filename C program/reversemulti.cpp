#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d x %d = %d \n",n,i,n*i);
        sum+=(n*i);
    }
    printf("%d",sum);
}