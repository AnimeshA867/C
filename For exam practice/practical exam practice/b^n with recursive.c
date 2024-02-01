//Program to calculate b^n using recurvise as well as not recursive function

#include<stdio.h>

int power(int n, int p){
    if(p==1){
        return n;
    }else{
        p--;
        return power(n,p)+power(n,p);

    }
}
void main(){
    int n,p;
    printf("Enter the number and the value of the power:");
    scanf("%d %d",&n,&p);

    int poww=power(n,p);
    printf("%d",poww);
}