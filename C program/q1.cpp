// Write an algorith, flowchart and program to input n nmbers in an array and find the sum and average of elements in that array.
#include<stdio.h>
#include<conio.h>
int main(){
        int num[20],sum=0,av,a=0;
        for(int i =0;i<10;i++){
            printf("Enter a number:");
            scanf("%d",&num[i]);
            sum+=num[i];
            a++;
        }
        av=sum/a;
        printf("The sum of the array is: %d\n",sum);
        printf("The average of the array is: %d\n",av);
        
}