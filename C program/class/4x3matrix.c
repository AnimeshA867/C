//Write a program to create a 4x3 matrix
#include<stdio.h>
int main(){
    int a[100][100];
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            printf("Enter a matrix element %d %d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}