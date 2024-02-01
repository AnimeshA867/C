#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("WELCOME TO NEPAL.txt","w");
	fprintf(fp,"Welcome to nepal");
	fclose(fp);
}
