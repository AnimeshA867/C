// Write a program to find sum and average of n
// numbers entered from the keyboard using dynamic memory allocation to create array
// to store these n numbers.(2+4)
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    float av;
    int sum,*arr;
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",arr+i);
        sum+=*(arr+i);
    }
    av=sum/n;
    printf("The sum of the numbers is %d\n",sum);
    printf("The average of the numbers is %.2f",av);
}