#include<stdio.h>
#include<math.h>
int nhap(int n){
	printf("nhap n>0 :");
	scanf("%d",&n);
	while(n<0){
		printf("nhap n>0 :");
	scanf("%d",&n);}
	return n;
}
void ngto(int n){
	int count=0;
		int v;
	for(int i=2;;i++){
		if(i==2||i==3){
			printf("%d ",i);
				count++;
		}
	for(int j=2;j<=sqrt(i);j++){
		if(i%j!=0){
			v=0;}
				else{
				 v=1;
				 break;}}
				 
			if(v==0){
				printf("%d ",i);
				count++;}
			if(count>=n){
				     break;}
		}
}
void fibonaci(int n){
	int count=0;
	int tong=0;
	int a=0,b=1;
	while(count<n){
		if(a==0){
			tong=a;
			printf("%d ",tong);
			count++;
			tong=0;
			if(b==1){
			tong=b;
			printf("%d ",tong);
			count++;
			tong=0;
		}
		}
		tong=a+b;
		printf("%d ",tong);
		count++;
		a=b;
		b=tong;
		tong=0;
		}
	
}
void socp(int n){
	int count=0;
for(int i=1;;i++){
	for(int j=1;j<=i*i;j++){
		if(j*j==i){
			printf("%d ",i);
			count++;
		}
	}
	if(count>n){
		break;
	}
}
}

int main(){
	int n=nhap(n);
	printf("%d so nguyen to dau tien : ",n);
	ngto(n);
	printf("\n%d so fibonaci dau tien : ",n);
	fibonaci(n);
	printf("\n%d so chinh phuong dau tien : ",n);
	socp(n);
	return 0;
}