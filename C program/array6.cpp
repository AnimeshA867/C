#include<stdio.h>
int main(){
    int a=0;
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
            if((j+a)>=10){
                printf("%d\t ",(j+a)%10);
            }else{
            printf("%d \t",j+a);
            }
             }a++;
        printf("\n");
       }
}