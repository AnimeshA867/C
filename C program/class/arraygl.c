//WAP to find smallest and largest element in an 1D Array for N elements. (1+7)
#include<stdio.h>
int main(){
    int num[1000];
    int temp,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element of the array:");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]<num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n Printing array elements in asscending order:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }*/
     printf("\n Printing array elements in descending order:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",num[i]);
    }

}