#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",**(a+i));
        }printf("\n");
    }
}