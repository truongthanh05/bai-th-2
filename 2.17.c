#include<stdio.h>
int main(){
	int m,n;
	printf("nhap m , n >0 : ");
	scanf("%d%d",&m,&n);
	if(m>0 && n>0){
		while(m!=n){
			if(m>n){
				m=m-n;
			}
			else {
				n=n-m;
			}
		}
		if(m == 1){
			printf("hai so nguyen to cung nhau ");
		}
		else 	printf("hai so nguyen to khong cung nhau ");
		
	}
	else printf("nhap m,n>0");
	return 0;
}