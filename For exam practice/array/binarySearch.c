//Here we are going to use binary search to search certain element in the array.
#include<stdio.h>
void main(){
    int a[]={1,2,4,3,56,4,6,5,6,54,45};
    //To use binary search, it is necessary to sort the array first. So as I'm, I'm going to sequential search.
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int s;
    printf("Enter the element to search in the array:");
    scanf("%d",&s);
    int flag=1;
    int r=n-1;
    int l=0;
    int c;
    while(flag!=0){
        c=(l+r)/2;
        if(s==a[c]){
            flag=0;
            break;
        }else if(s<a[c]){
            r=c-1;
        }else{
            l=c+1;
        }
        if(r<=l){
            break;
        }
    }
    if(flag==0){
        printf("The element has been found.");
    }else{
        printf("The element was not found in the array.");
    }
}