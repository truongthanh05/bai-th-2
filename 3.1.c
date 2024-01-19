#include<stdio.h>
int main(){
	int m,n;
	
	printf("nhap hang m = ");
	scanf("%d",&m);
	printf("nhap gia tri in n = ");
	scanf("%d",&n);
	if(m<0 || n<0){
		printf("nhap so duong!");
	}
	else{
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				printf("%d\t",j);
			}
			printf("\n\n");
		}
	}
	return 0;
	
}