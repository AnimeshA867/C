// Use pointer to pointer variable to print the value of a variable
#include<stdio.h>
int main(){
    int a=10;
    int *p,**q;
    p=&a;
    q=&p;
    printf("%d",**q);
}