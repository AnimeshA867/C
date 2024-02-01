#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[30];
    int roll_no;
};
void main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter the name of the student:");
        gets(s[i].name);
        printf("Enter the roll no. of the student:");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
    }
    for(int i=0;i<5;i++){
        printf("%s\t%d\n",s[i].name,s[i].roll_no);
    }
}