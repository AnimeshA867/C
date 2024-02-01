#include<stdio.h>
#include<conio.h>
int main(){
    // int a=1;
    for(int i=1;i<4;i++){
        for(int j=5;j>i;j--){
               printf(" ");
           }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=i-1;j>=1;j--){
            printf("+");
        }
        printf("\n");
    }
}