#include<stdio.h>
void main(){
    int a[]={1,2,5,6,9,10,23,56};
    int key;
    printf("Enter the element to search in the array:");
    scanf("%d",&key);
    int high=sizeof(a)/sizeof(int),low=0,mid,flag=1;
    while(flag!=0){
        mid=(high+low)/2;
        if(key==a[mid]){
            flag=0;
            break;
        }else if(key<a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
        if(high<=low){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The element %d has been found.",key);
    }else{
        printf("The element %d has not been found.",key);
    }
}