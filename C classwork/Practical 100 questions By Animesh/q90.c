/*
program to read m students record with fields (roll_no, name, class, and marks in 5
subjects) and display their records along with their percentage of marks obtained.
*/

#include<stdio.h>
#define m 5

struct student {
    int roll,class;
    float percent;
    char name[25];
    float marks[5],total;
};
void main(){
    struct student s[m];
    char c;
    for(int i=0;i<m;i++){
        printf("Enter the name of the student:");
        gets(s[i].name);
        printf("Enter the roll no. of the student:");
        scanf("%d",&s[i].roll);
        printf("Enter the class of the student:");
        scanf("%d",&s[i].class);
        s[i].total=0; 
        for(int k=0;k<5;k++){
        printf("Enter the marks of the student in subject %d:",k+1);
            
        scanf("%2f",&s[i].marks[k]); 
        s[i].total+=s[i].marks[k];
        }
         
        s[i].percent=(s[i].total)/5;
        c=getchar();
    }
printf("Name\t \t\t Roll no. \tClass\t Physics  IIT      DL     Math      C programming\t Percent\n");
    for(int i=0;i<m;i++){
       printf("%s\t\t\t %d\t\t %d\t ",s[i].name,s[i].roll,s[i].class);
       for(int j=0;j<5;j++){
        printf("%.2f       ",s[i].marks[j]);
       }
       printf("\t%.2f\n",s[i].percent);
}
}