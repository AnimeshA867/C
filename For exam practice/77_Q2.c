//Write a program to find transpose of a matrix.
#include<stdio.h>
void main(){
    int r,c;
    printf("Enter the row and column of the matrix:");
    scanf("%d %d",&r,&c);
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the matrix element of the matrix to be transposed:");
            scanf("%d",&m[i][j]);
        }
    }
    printf("The matrix before transpose is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("The matrix after transpose is:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }
}