#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
	int h;
	
	printf("nhap chieu cao h = ");
	scanf("%d",&h);
	
	if(h<0){
		printf("nhap so duong!");
	}
	else{
	    for(int i=1;i<=h;i++){
	        for(int j=1;j<2*h;j++){
	           
	            if(abs(h-j)<=i-1){
	                
	               int asao=1;
	               int bsao=i;
	                for(int a=asao;a<i;a++){
	                    
	                        printf(" %d ",a);
	                        asao+=1;
	                        break;
	                        }
	                for(int b=i;b>0;b--){
	                            printf(" %d ",b);
	                            bsao=i-1;
	                        }
	            }
	            else{
	                printf("   ");
	            }
	        }
	        printf("\n\n");
	    }
	    
	    
	    
	    
	}
	    return 0;}