//Here in this program we are going to multiply two matrices with the help of function
#include<stdio.h>
void multiply(int row1,int column1,int row2, int column2, int (*arr1)[3],int (*arr2)[1],int (*multi)[1]){
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            *(*(multi+i)+j)=0;
            for(int k=0;k<row2;k++){
                *(*(multi+i)+j)+=*(*(arr1+i)+k)* *(*(arr2+k)+j);
            }
        }
    }
}
void main(){
    int a[3][3],b[3][1],multi[3][1];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the matrix element of matrix A:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf("Enter the matrix element of matrix B:");
            scanf("%d",&b[i][j]);
        }
    }
    multiply(3,3,3,1,a,b,multi);
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
}