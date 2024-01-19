#include<stdio.h>
int main(){
	int a,i,b,n;
	int nhan=1;
	do{
	
	printf("nhap gia tri n = ");
	scanf("%d",&n);
	if(n<0){
		printf("vui long nhap so nguyen duong!\n\a");
		
	}
	else{
	
	
	for(i=1;i<=n;i++){
		nhan*=i;
	}
	printf("s= 1+1.2+1.2.3.....+1.2.3....n = %d\n\a",nhan);}}while(n<=0);
	
	return 0;
	
}