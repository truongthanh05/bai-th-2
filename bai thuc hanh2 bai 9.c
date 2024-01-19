#include<stdio.h>
int main(){
	int n,i;
	
	
	printf("nhap gia tri n = ");
	scanf("%d",&n);
	if(n%1==0 && n%n==0){
		for(i=2;i<n;i++){
			if(n%i==0){
				printf("n la khong phai la so nguyen to\n");
				break;
			}
			else if(n%i){
				printf("n la so nguyen to = %d\n",n);
				break;;
			}
			else break;
		
		}
	}
	
	

	
	return 0;
}