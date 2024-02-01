//Wap to multiply two 3*3 matrix with the help of function.
#include<stdio.h>
void input(int *arr, char a){
    printf("Enter an element of matrix %c:",a);
    scanf("%d",arr);
}
void display(int a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
}
void multiply(int a[3][3], int b[3][3], int mult[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mult[i][j]=0;
            for(int k=0;k<3;k++){
                mult[i][j]+=a[i][j]+b[i][j];
            }
        }
    }
    display(mult);

}
void main(){
    int a[3][3],b[3][3],prod[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            input(&a[i][j],'A');
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            input(&b[i][j],'B');
        }
    }
    multiply(a,b,prod);
    
}