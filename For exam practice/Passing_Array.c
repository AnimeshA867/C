#include<stdio.h>
void modify(int *arr){
    for(int i=0;i<10;i++){
        (*(arr+i))*=4;
    }
}
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    modify(arr);
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}