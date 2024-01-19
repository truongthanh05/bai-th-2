#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
bool nguyento(int a,int b){
	
	for(int i=a;i<=b;i++){
		if(i==2||i==3){
			printf("%d\n",i);
		}
		else{
		
		for(int j=2;j<=3;j++){
		
			if(i%j!=0){
				printf("%d\n",i);
			}
			else return false;
		}}
	}
	return true;
}
int main(){
	int a ,b;
	printf("nhap [a,b] : ");
	scanf("%d%d",&a,&b);
	nguyento(a,b);
	return 0; 
}