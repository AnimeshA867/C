//Write a program to find the second smallest and second largest elements of an array of 10
// integers.
#include<stdio.h>
void main(){
    int a[100];
    for(int i=0;i<10;i++){
        printf("Enter the array element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element of the array is %d",a[1]);
    printf("\n The second greatest element of the array is %d",a[8]);
}