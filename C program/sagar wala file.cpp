#include<stdio.h>
#include<conio.h>
struct student{
	int roll, clas;
	char name[20];
};
int main(){
	struct student s[25];
	FILE *fp;
//	fp=fopen("sagarboka.dat","w");
//	for(int i=0;i<5;i++){
//		printf("Enter name:");
//		scanf("%s",s[i].name);
//		printf("Enter roll no.:");
//		scanf("%d",&s[i].roll);
//		printf("Enter class:");
//		scanf("%d",&s[i].clas);
//	}
//	for(int i=0;i<5;i++){
//		fprintf(fp,"%s\t %d\t %d\n",s[i].name,s[i].roll,s[i].clas);
//	}
	fclose(fp);
	fp=fopen("sagarboka.dat","r");
	for(int i=0;i<5;i++){
		fscanf(fp,"%s\t %d\t %d\n",s[i].name,&s[i].roll,&s[i].clas);
		printf("%s\t %d\t %d\n",s[i].name,s[i].roll,s[i].clas);
		
	}
}
