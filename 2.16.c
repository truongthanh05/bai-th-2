#include<stdio.h>
#include<math.h>
int main(){
	int m,n,i;
	printf("nhap m < n :");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(sqrt(i)-(int)sqrt(i)==0){
			printf("%d ",i);
		}
	}
	
	
	
	
	return 0;
}