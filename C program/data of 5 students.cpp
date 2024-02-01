// Program to read and write data of 5 students from "student.txt".
#include<stdio.h>
#include<conio.h>
struct student{
	int roll,clas;
	char name[25];
};
int main(){
	struct student s[5];
	FILE *fp;
	fp=fopen("student.txt","w");
	for(int i=0;i<=5;i++){
		printf("Enter the name of the student:");
		scanf("%s",s[i].name);
		printf("Enter the roll no. of the student:");
		scanf("%d",&s[i].roll);
		printf("Enter the class of the student:");
		scanf("%d",&s[i].clas);
		fprintf(fp,"%s\t %d\t %d\n",s[i].name,s[i].roll,s[i].clas);
	}
	printf("Name:\t Roll no.: \t Class: \n")
	for(int i=0;i<=5;i++){
		printf("%s\t %d\t %d\n",s[i].name,s[i].roll,s[i].clas);
	}
	fclose(fp);
}
