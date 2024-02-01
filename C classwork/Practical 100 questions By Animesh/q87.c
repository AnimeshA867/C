//using pointer write a program to get n integer number and display them in ascending order (use malloc or calloc to reserve memory)
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],*ptr;

    ptr= (int *)malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
        
    }
}