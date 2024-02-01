/*
Write a program to find the transpose of the following matrix:
A= {{-3,7,5,-2,8},{2,5,8,3,-4},{-6,9,3,6,5}};
*/
#include<stdio.h>
void main(){
    int a[3][5]={{-3,7,5,-2,8},{2,5,8,3,-4},{-6,9,3,6,5}};
    printf("The original matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    } 
    printf("The matrix after transpose is:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}