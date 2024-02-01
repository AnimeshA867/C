#include<stdio.h>
// #include<conio.h>
int main(){
    int n[10],sum=0;
    int i;
    for( i=0;i<10;i++){
        printf("Enter a number to find sum of:");
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    printf("The sum of the 10 numbers are:%d",sum);
}