#include <stdio.h>
void heart(int n,int m){
	for(int i=1;i<7;i++){
		for(int j=1;j<=7;j++){
			if(!((i==1 &&(j==1||j==4||j==7))
			||(i==4&&(j==1||j==7))
			||(i==5&&(j==1||j==2||j==6||j==7))
			||(i==6&&(j<=3||j>=5)))){
				printf(" * ");
			}
			else printf("   ");
		}
		printf("\n");
	}
}

int main()
{ int n=6,m=7;
heart(n,m);
    
    

    return 0;
}