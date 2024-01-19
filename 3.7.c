#include <stdio.h>
#include<stdbool.h>
int dao(int n){
    int dao=0;
    int m=n;
     while(n>0){
	        
	        dao=dao*10+n%10;
	        n/=10;
}
return dao==m;}
int chia(int n,int k){
    if(k==0){
        return false;
    }
    return n%k==0;
}

int main()
{ int k;
    printf("nhap gia tri k = ");
    scanf("%d",&k);
    for(int i=10000000;i<=99999999;i++){
        if(dao(i) && chia(i,k)){
            printf("%10d",i);
        }
    }
    

    return 0;
}