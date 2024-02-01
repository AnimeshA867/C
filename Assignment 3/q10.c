/*
Write a program to find the sum of each row of the two dimensional array of size 3x3.
*/
#include<stdio.h>
void main(){
    int a[3][3],sum[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the matrix element [%d%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        sum[i]=0;
        for(int j=0;j<3;j++){
           sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
       printf("The sum of the row %d is %d\n",i,sum[i]);
    }
    
    
}