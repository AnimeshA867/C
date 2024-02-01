#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10 + sum(n/10);
    }
}
void main(){
    int n=1234;
    printf("%d",sum(n));
}