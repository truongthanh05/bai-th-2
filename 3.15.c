#include<stdio.h>
#include<stdbool.h>
bool tnghich(int n){
	long long m=n,tong=0;
	while(n>0){
		tong+=tong*10+m%10;
		m/=10;
	}
	return tong==n;
	
	
}
bool  k6(int n){
	long long m=n,tong=0;
	int v=0;
	while(n>0){
		tong+=m%10;
		m/=10;
		if(tong==6){
		return false;
		}
		tong=0;
	}
	return true;
}
bool tongchia6(int n){
	long long m=n,tong=0;
	while(n>0){
		tong+=m%10;
		m/=10;
		}
		if(tong%6!=0){
			return false;
		}
		else if(tong%6==0){
			return true;
		}
		
}
int main(){
	int i;
	printf("cac so thuan nghich , tong chia het cho 6, khong co chu so 6 có 8 chu so : ");
	for( i=10000000;i<=99999999;i++){
		if(tnghich(i) && k6(i) && tongchia6(i)){
			printf("%10d",i);
		}
	}
	return 0;
}
