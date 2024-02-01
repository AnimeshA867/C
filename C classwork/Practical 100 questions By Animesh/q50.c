//Program to display all leap year starting from 1900 to 2000.
#include<stdio.h>
void main(){
    for(int i=1900;i<=2000;i++){
        if(i%4==0&&i%100!=0||i%100==0&i%400==0){
            printf("%d\t",i);
        }
    }
}