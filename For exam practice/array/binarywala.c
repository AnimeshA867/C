#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a[]={1,2,3,5,3,5,4,5,6,7,5,7,6,65,5,45,34,54,234};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
    int key,high=n-1,low=0,mid;
    printf("Enter the element to search:");
    scanf("%d",&key);
    int flag=1;
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
