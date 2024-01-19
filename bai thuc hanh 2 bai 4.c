#include<stdio.h>

int main(){
int n,i;
int sum=0;
int sum1=0;
int sum2=0;
do{

	printf("\6nnhap gia tri n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum+=i;
	}
	printf("tong gia tri nho hon n = %d",sum);
	for(i=0;i<n;i++){
		if(i%2 == 0){
			sum1+=i;
			}
			
		
	}
	printf("\ntong gia tri cac so chan nho hon n = %d",sum1);
	for(i=0;i<n;i++){
		if(i%2){
		sum2+=i;
			}}
		printf("\ntong gia tri cac so chan nho hon n = %d",sum2);
	}while(n!=0);
	return 0;
}
