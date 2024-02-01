#include<stdio.h>
void main(){
    int n,flag=1,count=0,i=0;
    printf("Enter the number of prime numbers to print:");
    scanf("%d",&n);
    for(count=0;count<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                continue;
            }
        }
        if(flag==1){
            count++;
            printf("%d\t",i);
        }
        flag=1;
    }
}