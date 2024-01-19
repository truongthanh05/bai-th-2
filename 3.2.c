#include<stdio.h>
int main(){
	int m,n;
	
	printf("nhap hang n= ");
	scanf("%d",&n);
	printf("nhap cot m = ");
	scanf("%d",&m);
	if(m<0 || n<0){
		printf("nhap so duong!");
	}
	else{
		
		
		for(int i=1;i<=m;i++){
			printf("\t");
			for(int j=1;j<=n;j++){
				printf("X ",j);
			}
			printf("\n\n");
		}
	}
	return 0;
}