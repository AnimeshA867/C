//// using pointer write a program to add two 3 × 2 matrices and print the result in matrix form.

#include<stdio.h>
#include<stdlib.h>
void main(){
    int arr1[3][2],arr2[3][2],sum[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the matrix element of A:");
            scanf("%d",(*(arr1+i)+j));
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the matrix element of B:");
            scanf("%d",(*(arr2+i)+j));
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            *(*(sum+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",*(*(sum+i)+j));
        }printf("\n");
    }
}