//Program to read n number in an array and siplayt their sum and average.
#include<stdio.h>
void main(){
    int s;
    float n[100],sum=0,av;
    printf("Enter the size of the array(Maximum size is 99):");
    scanf("%2d",&s);
    for(int i=0;i<s;i++){
        printf("Enter the array element:");
        scanf("%f",&n[i]);
        sum+=n[i];
    }
    av=sum/s;
    printf("The sum of the array element is %.2f\n",sum);
    printf("The average of the array element is %.2f",av);
}
