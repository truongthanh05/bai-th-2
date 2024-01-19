#include<stdio.h>
#include<stdbool.h>
int pascal(int k,int i){
	if(k==0||k==i){
		return 1;
	}
	else{
	return pascal(k-1,i-1)+pascal(k,i-1);
	}
	
	
}
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int c=1;c<n-i;c++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			
			printf("%d ",pascal(k,i));
		}
		printf("\n");
	}
	return 0;
}