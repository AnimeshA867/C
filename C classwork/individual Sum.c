/*
Write a program to find separately the sum of the positive and negative integer elements of an array of size 10. Pass the positive and negative elements to separate functions e.g. sub_position(int* )to caryout sum
*/
#include<stdio.h>
int p_sum(int n){
    static int psum=0;
    psum+=n;
    return psum;
}
int n_sum(int n){
    static int psum=0;
    psum+=n;
    return psum;
}
void main(){
    int a[10],psum,nsum;
    for(int i=0;i<10;i++){
        printf("Enter array element in integer:");
        scanf("%d",a+i);
        if(*(a+i)>0){
            psum=p_sum(*(a+i));
        }else{
            nsum=n_sum(*(a+i));
        }
    }
    printf("The sum of negative number is %d\n",nsum);
    printf("The sum of positive number is %d",psum);
    
}