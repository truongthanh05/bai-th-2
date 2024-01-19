#include<stdio.h>
int main(){
	int  a,i;
	int sum=0;
	printf("nhap gia tri n = ");
	scanf("%d",&a);
	for(i=0;i<a;){
		sum+=i;
		i++;
	}
	printf("sum = %d",sum);
	return 0;
}