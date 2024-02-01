#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter any integer:");
    scanf("%d",&n);
    printf("The square root: %.2f \n square: %.2f",(float)pow(n,0.5),(float)pow(n,2));
}