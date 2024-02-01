#include<stdio.h>
int main(){
       int n;
    printf("Enter a number.");
 
    scanf("%d",&n);
        printf("For 2\n");

    printf("%d\n",(n - n%2)/2);
    printf("%d\n",n%2);
    printf("For 8\n");
     printf("%d\n",(n - n%8)/8);
    printf("%d\n",n%8); 
        printf("For 16\n");

    printf("%d\n",(n - n%16)/16);
    printf("%d\n",n%16);
}