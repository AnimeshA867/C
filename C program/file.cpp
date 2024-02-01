#include<stdio.h>
#include<conio.h>
struct Student{
    char name[25];
    int roll_no[25];
    int class1[25];
};
 struct Student s[25];
int main()
{
   
    FILE *fp;
    fp=fopen("Student.txt","w");
    for(int i=0;i<=5;i++){
    printf("Enter name of the student:");
    scanf("%s",s[i].name);
    printf("Enter roll no.:");
    scanf("%d",&s[i].roll_no);
    printf("Enter class of the student:");
    scanf("%d",&s[i].class1);
    }
    for(int i=0;i<=5;i++){
    fprintf(fp,"%s\t %d\t %d\n ",s[i].name,s[i].roll_no,s[i].class1);
    }
    fclose(fp);
    fp=fopen("Student.txt","r");
    printf("Name\t Roll no. \t Class\n");
    for(int i=0;i<=5;i++){
    fscanf(fp,"%s\t %d\t %d\n ",s[i].name,s[i].roll_no,s[i].class1);
    
    printf("%s\t %d\t %d\n ",s[i].name,s[i].roll_no,s[i].class1);
    }
    fclose(fp);
}