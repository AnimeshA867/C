#include<stdio.h>
void main(){
    int a[3][3], b[3][3], multi[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the matrix element of A:");
            scanf("%d",*(a+i)+j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the matrix element of B:");
            scanf("%d",*(b+i)+j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           *(*(multi+i)+j)=0;
            for(int k=0;k<3;k++){
             *(*(multi+i)+j)+=*(*(a+i)+k)* *(*(b+k)+j);
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",*(*(multi+i)+j));
        }
        printf("\n");
    }
}