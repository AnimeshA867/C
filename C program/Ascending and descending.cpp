//Ascending order:
#include<stdio.h>
#include<conio.h>
int main(){
	int n[10],t=0;
	for(int i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&n[i]);
	}
	//In Ascending order
	for(int i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(n[i]>n[j]){
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d\t", n[i]);
	}
	//In descending order:
	for(int i=0;i<10;i++){
		for(int j=i;j<10;j++)
		if(n[j]>n[i]){
			t=n[i];
			n[i]=n[j];
			n[j]=t;
		}
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d\t", n[i]);
	}
	return 0;
}
