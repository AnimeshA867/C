//Program to search an element in array using binary search.
#include<stdio.h>
int binary(int array[],int high,int low,int key){
    
    if(high>=low){
        int mid=(high+low)/2;
        if(key==array[mid]){
            return mid;
        }
        else if(key<array[mid]){
            return binary(array,mid-1,low,key);
        }else if(key>array[mid]){
            return binary(array,high,mid+1,key);
        }
    }return -1;
}
void main(){
    int key,flag;
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int n=sizeof(arr)/4;
        int low=0;
    int high=n-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Enter the element to search:");
    scanf("%d",&key);
    flag=binary(arr,high,low,key);
    if(flag==-1){
        printf("Not found.");
    }else{
        printf("The element has been found at index %d.",flag-1);
    }
}