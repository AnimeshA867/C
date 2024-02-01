#include<stdio.h>
int count(){
    static int n;
    return n++;
}
void main(){
    for(int i=0;i<100;i++){
        count();
    }
    printf("%d",count());
}