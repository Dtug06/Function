#include<stdio.h> 
int  sum(int a,int b);
 int main (){
	int a,b;
	int total; 
	printf("nhap a ");
	scanf("%d",&a) ;
	printf("nhap b ");
	scanf("%d",&b) ;
	 total=sum(a,b);
	printf("%d ",total) ;
	 
 	return 0; 
 } 
 sum(int a,int b){
 	int total=a+b;
return total; 
 } 
