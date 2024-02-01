#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	int roll,clas;
	char name[20];
	fp=fopen("student.txt","w");
	printf("Enter name of the student:");
	scanf("%s",name);
	printf("Enter roll no. of the student:");
	scanf("%d",&roll);
	printf("Enter class of the student: ");
	scanf("%d",&clas);
	fprintf(fp,"%s\t %d\t	%d\n",name,roll,clas);
	printf("%s\t %d\t	%d\n",name,roll,clas);
	fclose(fp);
	
}
