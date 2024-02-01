/*
What do you mean by entry-controlled and exit-controlled loop? Write a program to
print the following output.(2+4)
1
01
101
0101
10101
*/
#include<stdio.h>
#include<math.h>
void main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){

            printf("%d\t",1);
            }else{
                printf("%d\t",0);
            }
        }
        printf("\n");
    }
}