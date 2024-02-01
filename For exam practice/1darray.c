#include<stdio.h>
void modify(int *a,int n){
    for(int i=0;i<n;i++){
        *(a+i)*=3;
    }
}
void main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    modify(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}