#include<stdio.h>
#include<math.h>
void main(){
    int x=2,n=5,sum=0;
    for(int i=1;i<=5;i++){
        if(i%2==0){
            sum-=pow(x,i);
        }else{
            sum+=pow(x,i);
        }
    }
    printf("Sum: %d",sum);
}