#include<stdio.h>
unsigned long long giaiThua (int n);
int main(){
	int n;
	printf("giai thua ban muon tinh") ;
	scanf("%d",&n) ;
 unsigned long long sum =giaiThua(n);
 printf("%llu",sum);	
	return 0; 
} 
unsigned long long giaiThua(int n) {
	 unsigned long long giaiThuaI=1 ;
	for(int j=1;j<=n;j++ ){
	 giaiThuaI*=j;	
	}
	return giaiThuaI;
}
