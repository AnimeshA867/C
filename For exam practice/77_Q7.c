//Write a program to display first n prime numbers
#include<stdio.h>
void main(){
    int n,a=0,i=2;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int count=0;
    if(n<=0){
        printf("Invalid entry.");
    }else{

  while(count<n){
    a=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            a=1;
            break;
        }

    }
    if(a==0){
        printf("%d\t",i);
        count++;
    }
    i++;
  }
    }
}
