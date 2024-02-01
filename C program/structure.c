// Write a program to input name of  5 students using structure and display the name of students with percentage over 60%.
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
    int clas, roll;
    char name[250];
    float percent;

};
int main(){
    struct student s[100];
    for(int i=0;i<5;i++){
        printf("Enter the name of the student:");
        //fgets(s[i].name,500,stdin);
	//scanf("%s",s[i].name);
	gets(s[i].name);
        printf("\n Enter the roll no. of the student:");
        scanf("%d",&s[i].roll);
        printf("\nEnter the class of the student:");
        scanf("%d",&s[i].clas);
        printf("\n Enter the percentage of %s\n",s[i].name);
        scanf("%f",&s[i].percent);
   }
   for(int i=0;i<5;i++){
       if(s[i].percent>=60){
           printf("\n %s",s[i].name);
       }
   }
    

}