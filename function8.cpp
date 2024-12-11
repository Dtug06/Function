#include<stdio.h> 
int  gcd(int a,int b) ;
int main (){
int a,b,uclnt; 
printf("nhap 2 so\n ") ;
printf ("nhap a") ;
scanf("%d",&a) ;
printf("nhap b");
scanf("%d",&b) ;
uclnt=gcd(a,b);
printf("uoc chung lon nhat la %d ",uclnt) ;
	return 0; 
} 
int  gcd(int a,int b) {
	if (b == 0)
	 return a;
	 return gcd(b, a %b); 
}
