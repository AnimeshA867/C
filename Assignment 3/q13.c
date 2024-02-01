/*
Write a program to find the addition and subtraction of two matrices by asking size from
the users.
*/
#include<stdio.h>
void main(){
    int row,col,A[100][100],B[100][100],sum[100][100],dif[100][100];
    printf("Enter the row and column of the matrices:");
    scanf("%d %d",&row,&col);
    printf("Enter the first matrix:\n");
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the matrix element:");
            scanf("%d",&A[i][j]);
        }
    } 
    printf("Enter the second matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the matrix element:");
            scanf("%d",&B[i][j]);
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }  
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            dif[i][j]=A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",dif[i][j]);
        }
        printf("\n");
    } 
}