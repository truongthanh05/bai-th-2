#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int tong(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		
		n/=10;
		
	
		
	}
	return tong;
	
}
void thuaso(int n){
	int i=2;
	while(i<=n){
		if(n%i==0){
			printf("\%d",i);
		
			n/=i;
			
			
		}
		else{
			i++;
		}
		
		
	}
	printf("\n");
	
	
	}


int main(){
	int n;
	printf("nhap gia tri n > 0 : ");
	scanf("%d",&n);
	int sum=tong(n);

	printf("tong cac chu so = %d\n",sum);
	printf("thua so :%d = ",n);
	thuaso(n);
	
	
	return 0;
}