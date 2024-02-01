#include<stdio.h>
void swap (int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("Value after swapping with function: a=%d and b=%d\n",*x,*y);
}
void main(){
    int a=30,b=40,*x;
    printf("a=%d and b=%d before swapping.\n",a,b);
    swap(&a,&b);
    printf("a=%d and b=%d after swapping.",a,b);
    printf("%d",sizeof(*x));
}
