#include<stdio.h>
void a(int (*arr)[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(arr+i)+j)*=3;
        }
    }
}
void main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the matrix element:");
            scanf("%d",*(arr+i)+j);
        }
    }
    a(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}