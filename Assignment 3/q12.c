/*
Write a program that reads the elements of matrix of size 3 by 4 and find the sum of the
elements of matrix with the value greater than 10.
*/
#include<stdio.h>
void main(){
    int A[100][100],sum=0;
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the matrix element:");
            scanf("%d",&A[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
          if(A[i][j]>10){
sum+=A[i][j];
          }
        }
    }
    printf("The sum of elements of the matrix with the value greater than 10 is: %d",sum);
}