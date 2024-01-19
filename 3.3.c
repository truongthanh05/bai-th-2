#include<stdio.h>
int main(){
	int h;
	
	printf("nhap chieu cao h = ");
	scanf("%d",&h);
	
	if(h<0){
		printf("nhap so duong!");
	}
	else{
		int count=0;
		
		
		for(int i=1;i<=h;i++){
			printf("\t");
			count++;
	
	         for(int j=1;j<=count;j++){
				printf("* ",j);
			}
			printf("\n\n");
			
			}}
	return 0;
}