#include<stdio.h>
int nhapN(int n){
	n=0;
	printf("nhap n > 0 : ");
	scanf("%d",&n);
	while(n < 0){
		printf("nhap n > 0:");
		scanf("%d",&n);
	}
	return n;
}
int dem(int n){
	int count=0;
	while(n>0){
		
		count++;
		n/=10;
	}
	
	return count;
}

int demsole(int n){

	int count=0;
	long chia;
	while(n>0){
		chia=n%10;
		if(chia%2!=0){
			count++;
		}
	
		n/=10;
	}
	
	return count;
}

float trungbinhcong(int n){
	int tong=0;
	int count=0;
	float trungbinh;
	while(n>0){
	
		count++;
		n/=10;
	}
	while(n>0){
		tong+=n%10;
	
		n/=10;
	}
	trungbinh=(float)tong/count;
	
	return trungbinh;
}
int main(){
	int n;
	n=nhapN(n);
	printf("%d co %d chu so\n",n,dem(n));
	printf("%d co %d chu so le\n",n,demsole(n));
	printf("%d co trung binh cong chu so =  %0.2f\n ",n,trungbinhcong(n));
	trungbinhcong(n);
	return 0;
}
