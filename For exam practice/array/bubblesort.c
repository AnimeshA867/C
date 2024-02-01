// Here we are going to use bubble sort to sort a array.
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a[]={1,2,34,3,6,56,54,23,54,6};

    int n=sizeof(a)/sizeof(int);
    printf("The array before sorting is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
    printf("\n The array after sorting is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    }