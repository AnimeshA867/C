#include<stdio.h>
void main(){
    int a[3][2],sum[3];
    for(int i=0;i<3;i++){
        sum[i]=0;
        for(int j=0;j<2;j++){
            printf("Enter the matrix element:");
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        printf("The sum of %d row is %d\n",i+1,sum[i]);
    }

        
}