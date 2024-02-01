#include<stdio.h>
void addition(int (*a)[3],int (*b)[3],int (*sum)[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
}
void main(){
    int a[3][3],b[3][3],sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter matrix element of matrix A:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter matrix element of matrix B:");
            scanf("%d",&b[i][j]);
        }
    }
    addition(a,b,sum);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}