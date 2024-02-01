//Write a program to input the elements of 4 x 4  two matrix and sum of elements and prints its result.
#include<stdio.h>
int main(){
     int a[100][100],b[100][100],sum[100][100];
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("Enter a matrix element of matrix A %d %d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("Enter a matrix element matrix B %d %d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
    }
}
