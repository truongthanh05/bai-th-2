#include<stdio.h>
#include<stdbool.h>
int nhapN(){
	int n=0;
	printf("nhap n > 0 : ");
	scanf("%d",&n);
	while(n < 0){
		printf("nhap n > 0:");
		scanf("%d",&n);
	}
	return n;
}
bool tangdan(int n){
	int count;
	int a,b;
	a=n%10;
	n/=10;
	
	
	while(n>0){
		b=n%10;
		n/=10;
		if(b>a){
		return false;
		}
		a=b;
	
		
	}
	return true;
	
}
int sodau(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		if(n/10!=0){
		tong=0;}
		n/=10;
		
	}
	return tong;
}
int dem(int n){
	int c=sodau(n);
	int a=0,b;
	
	
	
	while(n>0){
		b=n%10;
		n/=10;
		if(b/c==1){
			a++;}
			
	
}
return a;
}
int main(){
	int n=nhapN(n);
	
	if(tangdan(n)) {
		printf("Cac chu so cua n sap xep theo thu tu tang dan!\n");
	} else {
		printf("Cac chu so cua n KHONG sap xep theo thu tu tang dan!\n");
	}
	printf("chu so dau tien : %d",sodau(n));
	printf("so lan xuat hien chu so dau : %d",dem(n));
	return 0;
}