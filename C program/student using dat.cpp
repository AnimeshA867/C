//Using .dat file
#include<stdio.h>
#include<conio.h>
struct student {
	int roll,clas;
	char name[25];
};
int main(){
	struct student s;
	FILE *fp;
	
	fp=fopen("student.dat","w");
	printf("Enter name of the student:");
	scanf("%s",s.name);
	printf("Enter roll no. of the student:");
	scanf("%d",&s.roll);
	printf("Enter class of the student:");
	scanf("%d",&s.clas);
	fprintf(fp,"%s\t %d\t %d\n",s.name,s.roll,s.clas);
	printf("%s\t %d\t %d\n",s.name,s.roll,s.clas);
	fclose(fp);
}
