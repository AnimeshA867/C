#include<stdio.h>
void main(){
    int a[]={1,2,3,4,5,6,7};
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=a+3;
    printf("%d\n",ptr1-ptr2);
    printf("%d",ptr2-ptr1);
}