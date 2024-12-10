#include<stdio.h> 
void mang(int array[10]);
int main (){
	int array[10] ;
	printf("moi nhap cac gia tri phan tu ");
 for(int i=0;i<10;i++){
 	printf("phan tu thu %d ",i+1) ;
 	scanf("%d",&array[i]) ;	 
 } 
  mang(array);
	return 0; 
}
 void mang (int array[10]){
	for(int i;i<10;i++) {
		printf("%d \n",array[i]) ;
	}
} 
