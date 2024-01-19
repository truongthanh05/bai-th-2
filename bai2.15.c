#include <stdio.h>

int main()
{
  long n;
    printf("nhap gia tri n = ");
    scanf("%ld",&n);
   
    if(n<0){
    	n*=-1;
	}
	long tong=0;
    long m=n;
    while(m>0){
        tong = tong+m%10;
       
        m/=10;
       
    }
    
   
        printf("%ld",tong);
        
    

    return 0;
}