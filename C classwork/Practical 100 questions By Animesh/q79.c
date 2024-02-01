//Program to read two-dimentional matrix and display its transposed form.
#include<stdio.h>
void main(){
    int m,n;
    printf("Enter the row and column of the matrix:");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the matrix element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before transpose:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("After transpose:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}