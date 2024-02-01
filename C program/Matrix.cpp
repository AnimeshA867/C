//Program to add two matrices by supplying elements of matrices by the user.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[5][5],b[5][5],sum[5][5];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter the matrix element of A:");
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter the matrix element of B:");
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
