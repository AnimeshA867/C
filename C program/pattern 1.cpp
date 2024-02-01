#include<stdio.h>
#include<conio.h>
int main(){
	int n=5;
	int b=0;
	for(int i=0;i<5;i++){
		for(int j=1;j<n-i;j++){
			printf("%d",j);
			b++;
		}
		printf("\n");
	}
}
