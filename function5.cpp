#include<stdio.h> 
int checkPri(int a);
int main (){
	int num1,num2;
	printf("nhap num1 ");
	scanf("%d",&num1) ;
	if(checkPri(num1)==1){
		printf("num1 la 1 so nguyen to\n") ;
	} else
	printf("num1 khong phai la 1 so nguyento\n"); 
	printf("nhap num2");
	scanf("%d",&num2) ;
	if(checkPri(num2)==1){
		printf("num2 la 1 so nguyen to ") ;
	} else
	printf("num2 khong phai la 1 so nguyento "); 
return 0;	
	 
}
int checkPri(int a) {
	for (int i=2;i*i<=a;i++) {
		if(a%i==0) {
			return 0; 
		}		 
	}
	return 1; 
}
 
