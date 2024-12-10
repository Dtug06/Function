#include<stdio.h> 
int soLonNhatTrongMang(int array[10]) ;
int main(){
	int array[10] ;
	printf("moi ban nhap cac gia tri vao mang");
	for(int i=0;i<10;i++) {
		printf("phan tu thu %d ",i+1) ;
		scanf("%d",&array[i]) ;
	}
	int max =soLonNhatTrongMang(array);
	printf("%d",max) ;
	return 0; 
} 
int soLonNhatTrongMang(int array[10]){
	int 	max=array[0] ;
	for(int i=0;i<10;i++) {
	   	if (array[i]<array[i+1]){
	   		max=array[i+1]; 
		   } 	
	}
	return max; 
} 
