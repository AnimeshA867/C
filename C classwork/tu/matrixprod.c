#include<stdio.h>
void main(){
    int n,m,p,q,a[10][10],b[10][10],prod[10][10];
    printf("Enter the number of rows for matrix 1:");
    scanf("%d",&n);
    printf("Enter the number of columns for matrix 1:");
    scanf("%d",&m);
    printf("Enter the number of rows for matrix 2:");
    scanf("%d",&p);
    printf("Enter the number of columns for matrix 2:");
    scanf("%d",&q);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the matrix element of matrix 1:");
            scanf(" %d",&a[i][j]);
        }
    }
   
     for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("Enter the matrix element of matrix 2:");
            scanf("%d",&b[i][j]);
        }
    }
    int temp=(m<=p)?m:p;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            prod[i][j]=0;
            for(int k=0;k<temp;k++){
                prod[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",prod[i][j]);
            // scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


}