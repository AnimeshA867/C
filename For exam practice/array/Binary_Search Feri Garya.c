#include<stdio.h>
void main(){
    int a[]={1,2,3,5,4,6,5,7,6,8,55,67,75,4};
    int n=sizeof(a)/sizeof(int);
    int key;
    printf("Enter the element to search:");
    scanf("%d",&key);
    int flag=1,high=n-1,low=0,mid;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    while(flag!=0){
        mid=(high+low)/2;
        if(key==a[mid]){
            flag=0;
            break;
        }else if(key<a[mid]){
            high=mid-1;
        }else if(key>a[mid]){
            low=mid+1;
        }if(high<=low){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The element %d has been found.",key);

    }
    else{
        printf("The element %d has not been found.",key);
    }
}