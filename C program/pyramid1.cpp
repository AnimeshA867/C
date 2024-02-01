#include<stdio.h>
#include<conio.h>
int main(){
    int a=1;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",a*a);
        }a++;
        for( int j=i-1;j>=1;j--){
            printf("%d",a*a);
        }a++;
        printf("\n");
    }
}