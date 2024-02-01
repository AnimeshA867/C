#include<stdio.h>
#include<stdlib.h>
void main(){
   
int n;
    printf("Enter 1 for my name and 2 for my address");
    scanf("%d",&n);
    if(n==1){
        goto name;
    }else if(n==2){
        goto address;
    }else{;}
     name:
     {


   printf("Hey there, it's me Animesh Acharya,\n");
     }

    address:
    {

    printf("Hey there, I live in Godawari\n");
    }

}