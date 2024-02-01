//Write a program to find sum and average of n number entered from the keyboard using dynamic memory allocation to create array to store these n numbers.

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,n;
    float sum=0;
    float average;
    printf("Enter the value of n:");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",arr+i);
        sum+=*(arr+i);
    }
    average=sum/n;
    printf("The sum of the entered numbers is %.2f",sum);
    printf("The average of the entered numbers is %.2f",average);

}