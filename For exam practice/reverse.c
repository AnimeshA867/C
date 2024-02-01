#include<stdio.h>
int rev(int x){
    int a=0;
    while(x!=0){
        a=a*10+x%10;
        x/=10;
    }
    return a;
}
void main(){
    int x=-123;
    printf("%d",rev(x));
}