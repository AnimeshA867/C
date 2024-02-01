#include<stdio.h>
#include<conio.h>
int main(){
	int a[25],l;
	for(int i=0;i<10;i++){
		printf("Enter a value:");
		scanf("%d",&a[i]);
	}
	l=0;
	for(int i=0;i<10;i++){
		if(l<a[i]){
			l=a[i];
		}
	}
	printf("%d",l);
}
