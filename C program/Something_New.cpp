#include<stdio.h>
#include<conio.h>
struct student{
	int roll;
	int clas;
	char name[25];
};
int main(){
	struct student s[5];
	FILE *fp;
	fp=fopen("rick rocks.txt","w");
	for(int i=0;i<5;i++){
		printf("Enter name of the student: ");
		scanf("%s",s[i].name);
		printf("Enter roll no. of the studnet:");
		scanf("%d",&s[i].roll);
		printf("Enter class of the student:");
		scanf("%d",&s[i].clas);
	}
		fprintf(fp,"Name\t Roll no:\t Class\n");
	for(int i=0;i<5;i++){
				fprintf(fp,"%s\t %d\t %d\n",s[i].name,s[i].roll,s[i].clas);

	}
	
}
