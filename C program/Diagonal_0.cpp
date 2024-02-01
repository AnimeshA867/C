// A program to check if diagonal element of a 4x4 matrix are zero or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[20][20],zero=0;
	for(int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("Enter the elements [%d] [%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			if(a[j][j]==0){
				zero=0;
			}else{
				zero=1;
			}
		}
	}
	if(zero==0){
		printf("The diagonals of the matrices are zero.");
	}
	else{
		printf("The diagonals of the matrices are not zero.");
	}
}
