#include<stdio.h>
#include<math.h>
void main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    do{
        sum+=n*n;
        n--;
    }while(n>=0);
    printf("%d is the sum of square number upto that number %d",sum,temp);
}