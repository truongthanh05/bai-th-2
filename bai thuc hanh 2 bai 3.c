#include<stdio.h>
#include <math.h>
int main(){
float n,i;
	float sum=0;
	printf("nhap gia tri n = ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum+=1/i;
	}
	printf("sum = %f",sum);
	return 0;
}
