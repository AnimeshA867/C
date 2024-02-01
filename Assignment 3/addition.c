//Write a program to find the addition and subtraction of two matrices by asking size from the users.
#include<stdio.h>
#include<math.h>
void main(){
    printf("For the addition and subtraction of two matrices the size of matrices must be equal.\n");
    int m,n,a[m][n],b[m][n],sum[m][n], sub[m][n];
    printf("Enter the columns of the matrices: ");
    scanf("%d",&m);
    printf("Enter the rows of the matrices:");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the matrix A:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the matrix B:");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sub[i][j]=abs(a[i][j]-b[i][j]);
        }
    } 
    printf("The addition of matrices is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("The subtraction of matrices is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    
}
