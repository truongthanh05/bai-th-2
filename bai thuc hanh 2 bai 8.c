#include<stdio.h>

int main()
{
    int a,b,i;
    int boiso;
    printf("nhap gia tri a = ");
    scanf("%d",&a);
    printf("nhap gia tri b = ");
    scanf("%d",&b);
    for(i=a;i>=1 ;i--){
        if(a%i==0 && b%i==0){
            printf("uoc chung lon nhat cua a va b : %d\n",i);
            break;
            
           
        }
        
    }
    boiso=a*b;
    printf("boi so cua nho nhat cua a va b : %d",boiso);
    return 0;
}
