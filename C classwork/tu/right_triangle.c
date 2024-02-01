#include<stdio.h>
void main(){
    int n=1;
    // printf("Enter number of rows:");
    // scanf("%d",&n);
    for(int i=1;i<=5;i++){

        for(int j=1;j<=i;j++){
            printf("%d\t",n);
            // n++;

        }
        n++;
        printf("\n");
    }
}