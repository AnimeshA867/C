//Program to store n elements in an array and pitn the elements using pointer.

#include<stdio.h>
void main(){
    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int arr[n],*ptr;
    ptr=arr;
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",(arr+i));
    }
    printf("The array element is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
}