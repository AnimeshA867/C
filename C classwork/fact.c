#include<stdio.h>
#include<conio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int a;
    printf("Enter the number to find factorial for:");
    scanf("%d",&a);
    int b=fact(a);
    printf("\nThe factorial of the num\vber is %d",b);
}