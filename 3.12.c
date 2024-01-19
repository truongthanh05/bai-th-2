#include<stdio.h>
#include<math.h>
int nhap(int n ){
	n=0;
	printf("nhap n > 0 :");
	scanf("%d",&n);
	while(n<0){
		printf("vui long hap n >0 : ");
		scanf("%d",&n);
	}
	return n;
}
void lietke(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d ",i);
		}
	}
}
int dem(int n){
	int count=0;
	
for(int i=1;i<=n;i++){
		if(n%i==0){
		
			count++; 
		}
	}
	return count;
}
void ngto(int n){
	for(int i=2;i<=n;i++){
		int v;
		if(n%i==0){
			for(int j=2;j<=sqrt(i);j++){
				if(i%j!=0){
					v=0;}
				else{
				 v=1;
				 break;}
			}
			if(v==0){
				printf("%d ",i);
			}}
		}
	}
int main(){
	int n=nhap(n);
	printf("cac uoc cua %d : ",n);
	lietke(n);
	printf("\nco %d uoc ",dem(n));
	printf("\ncac uoc la so nguyen to : ");
	ngto(n);
	return 0;
}