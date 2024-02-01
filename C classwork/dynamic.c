//Write a program to find the smallest and largest element in a list of n-elements of the
// array using pointer. Load n-elements of array using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr;
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",arr+i);
    }
    int min=123546578;
    int max=-123456789;
    for(int i=0;i<n;i++){
        if(min>*(arr+i)){
            min=(*(arr+i));
        }
        if(max<*(arr+i)){
            max=*(arr+i);
        }
    }

    printf("The minimum element from the array is %d\n",min);
    printf("The maximum element is from the array is %d.",max);

}