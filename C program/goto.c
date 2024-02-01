#include<stdio.h>
int main(){
    static max=1000;
    printf("Enter the soon to be value of max:");
    scanf("%d",&max);
    printf("%d",max);
}