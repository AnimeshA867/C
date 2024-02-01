//Write a program to accept 10 numbers and print the sum of these numbers through
#include<stdio.h>
int sum(int *arr){
    int s=0;
    for(int i=0;i<10;i++){
        s+=*(arr+i);
    }
    return s;
}
void main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    int s=sum(arr);
    printf("The sum of the array is %d",s);
}