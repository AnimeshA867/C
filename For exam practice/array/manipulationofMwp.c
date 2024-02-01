//Here we are going to manipulate the matrix with the help of pointer. And a little twist, we are going to use function to manipulate the matrix.
#include<stdio.h>
void mani(int *a,int n){
    for(int i=0;i<n;i++){
*(a+i) *=3;
    }
    }

void main(){
    printf("Here we are going to manipulate the matrix by dividing each element by 3 by passing through function\n");
    int a[]={1,2,3,4,4,5,4,5,7,7,8,7,6,5};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    printf("\nThis was before passing through the function. Now we're going to pass it through function.\n");
    mani(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe size of int is: %u",sizeof(int));
}