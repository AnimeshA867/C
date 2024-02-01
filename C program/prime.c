// Write a program to accept two numbers n1 and n2 entered by user. Display prime numbers between n1 and n2 (including).
#include<stdio.h>
#include<conio.h>
int prime(int num){
    int count=1;
    for(int i=2;i<=num/2;++i){
        if(num%i==0){
            count=0;
            break;
        }
    }
    return count;
}
int main(){
    int n1,n2,count1=0,count2=0;
    printf("Enter any two numbers:");
    scanf("%d %d",&n1,&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    for(int num=n1;num<=n2;num++){
       int flag=prime(num);
       if(flag!=0){
           printf("%d\t",num);
       }
        }
}