#include<stdio.h>
void main(){
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Both entered numbers are equal.");
    }else{
        printf("The two numbers are not equal.");
    }
}