#include<stdio.h>
#include<conio.h>
int main(){
	int a[100];
	int temp=0;
	for(int i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d\t ",a[i]);
	}
	return 0;
}
