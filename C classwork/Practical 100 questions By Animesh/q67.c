/*
Write a program to display largest and smallest number among 10 numbers stored in an
array
*/
#include<stdio.h>
void main(){
    int min=12345678,max=-12345566;
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The smallest number stored in the array is %d\n",min);
    printf("The largest number stored in the array is %d",max);
}