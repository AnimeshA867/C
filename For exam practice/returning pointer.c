#include<stdio.h>
// int *add(int *a,int n){
//     a=a+n;
//     return a;
// }
// void main(){
//     int a[]={1,2,3,4,5,6,7,8};
//     int *ptr;
//     for(int i=0;i<8;i++){

//     ptr=add(a,i);
//     printf("The address of ptr is %u\n",ptr);
//     printf("The value of ptr is %d\n",*ptr);
//     }
//}
int *add(int a, int b){
    int sum;
    sum=a+b;
    int *ptr;
    ptr=&sum;
    return ptr;
}
void main(){
    int *ptr;
    int a=10,b=20;
    ptr=add(a,b);
    printf("%d",*ptr);
}
