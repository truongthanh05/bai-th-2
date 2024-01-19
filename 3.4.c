#include<stdio.h>
#include<math.h>
int main(){
	int h;
	
	printf("nhap chieu cao h = ");
	scanf("%d",&h);
	
	if(h<0){
		printf("nhap so duong!");
	}
	else{
		int count=1;
		
		
		for(int i=1;i<=h;i++){
			
		
	
	         for(int j=1;j<2*h;j++){
	         	if(abs(h-j)<=i-1){
				 
				printf(" * ",j);}
				else printf("   ");
			}
			printf("\n");
			
			}
			count+=2;
			printf("\n\n");
			
			}
	return 0;
}