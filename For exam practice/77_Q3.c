//Create a structure named course with na,e, code, and credit_hour as its members. Write a program using this structure to read data of 5 courses and display data of those curses with credit_hour greater than 3.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct course{
    char name[30];
    int code,credit_hour;
};
void main(){
  struct course c[5];
  for(int i=0;i<5;i++){
    printf("Enter the name of the course:");
    gets(c[i].name);
    printf("Enter the code of the course:");
    scanf("%d",&c[i].code);
    printf("Enter the credit hour of the course:");

    scanf("%d",&c[i].credit_hour);
    fflush(stdin);
  }  
  printf("The courses with credit hour greater than 3 is:\n");
  for(int i=0;i<5;i++){
    if(c[i].credit_hour>3){
        printf("%s\t %d\t %d\n",c[i].name,c[i].code,c[i].credit_hour);
    }
  }
}