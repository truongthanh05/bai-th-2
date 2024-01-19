#include<stdio.h>
int main(){
  int n,i,solan=0;
     printf("nhap gia tri n = ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
	 
     	if(n%i==0){
		 
     		printf("uoc so cua gia tri n la : %d",i);
     		solan+=1;
		 }
     	
	 }
	 printf("so uoc cua n la :%d",solan);
     	
	 
	return 0;
}