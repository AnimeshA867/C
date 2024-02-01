//Twenty-five numbers are entered through the keyboard into an array; write a program find
// out how many of them are even and how many of them are odd.
#include<stdio.h>
void main(){
    int odd=0,even=0,num[25];
    for(int i=0;i<25;i++){
        printf("Enter the array element:");
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("The total number of odd digits present in the array is %d\n",odd);
    printf("The total number of even digits present in the array is %d",even);
}