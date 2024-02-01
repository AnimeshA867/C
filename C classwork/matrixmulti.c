#include<stdio.h>

void main(){
    int a[3][2],b[2][3],p[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the matrix element:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the matrix element of matrix B:");
            scanf("%d",*(b+i)+j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            p[i][j]=0;
            for(int k=0;k<2;k++){
                p[i][j]+=*(*(a+i)+k)+b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }

}