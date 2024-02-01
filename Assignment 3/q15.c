/*
Write a program to find the product of the following matrices and explain it.
A[3][3] = {{3,5,7},{2,-3,4},{4,5,2}};
B[3][2] = {{7,6},{6,-5},{4,3}};
*/
#include<stdio.h>
void main(){
    int A[3][3]={{3,5,7},{2,-3,4},{4,5,2}};
    int B[3][2]={{7,6},{6,-5},{4,3}};
    int multiplication[3][3];
    printf("The matrix A is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is: \n");
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    } 
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            multiplication[i][j]=0;
            for(int k=0;k<3;k++){
                multiplication[i][j]+=A[i][k]*B[k][j];
            }
           
        }
    } 
    printf("\n The multiplication of Matrices is: \n");
for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",multiplication[i][j]);
        }
        printf("\n");
    } 
}