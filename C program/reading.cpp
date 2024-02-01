#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	int roll,clas;
	char name[25];
	fp=fopen("student.txt","r");
	fscanf(fp,"%s\t  %d\t %d",name,&roll,&clas);
	printf("%s\t %d\t %d",name,roll,clas);
	fclose(fp);
}
