#include<stdio.h>
#include<math.h>
int main(){
	
	int n,i;
	printf("nhap gia tri n = ");
	scanf("%d",&n);
	if(n<2){
	  printf("%d khong phai la so nguyen to",n);
	}
	else{
	    	int mark=1;
	    for(i=2;i<=sqrt(n);i++){//ytb than trieu :Thuật toán kiểm tra số nguyên tố - Tại sao lại chạy từ 2 đến căn bậc 2 của n?

	        if(n%i==0){
	            mark=0;
	            break;
	           
	    }
	        
	    }
	    if(mark==1){
	        printf("%d  la so nguyen to",n);
	    }
	    else if(mark==0){ printf("%d khong phai la so nguyen to",n);}
	}
	
	return 0;
}