/*
Write a program to find the sum of diagonal elements of a rectangular matrix.
*/
#include<stdio.h>
void main(){
    int column,row,A[row][column],sum=0;
    printf("Enter the row and column of the matrix:");
    scanf("%d %d",&row,&column);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the matrix element:");
            scanf("%d",&A[i][j]);
        }
    }
    int min=(row>column)?column:row;
   for(int i=0;i<min;i++){
    sum+=A[i][i];
   }
    printf("The sum of the diagonal of the matrix is %d",sum);
}