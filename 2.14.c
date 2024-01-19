#include<stdio.h>
#include<math.h>
int main(){
	int m,n,i;
	int gt=1;
	printf("nhap gia tri n = ");
	scanf("%d",&n);
	printf("n! = ");

	for(i=n;i>=1;i--){
	    
		gt*=i;
		printf("%d",i);
		if(i>1){
		    printf("*");
		}
		else break;
		
	}
	printf(" = %d",gt);
	
	
	
	
	return 0;
}