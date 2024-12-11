#include<stdio.h> 
void mangHaiChieu(int a,int b) ;
int main (){
	int a,b;
	printf("moi nhap so hang");
	scanf("%d",&a) ;
	printf("moi nhap so cot");
	scanf("%d",&b) ;
	mangHaiChieu(a,b);
	return 0; 
	
} 
void mangHaiChieu(int a,int b) {
	int array[a][b]; 
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			printf("phan tu mang %d %d ",i,j) ;
			scanf("%d",&array[i][j]); 
		}
	}
	for(int i=0;i<a;i++) { 
		for(int j=0;j<b;j++) {			
			printf("%d ",array[i][j]); 
		}
		printf("\n");
	}	
}
