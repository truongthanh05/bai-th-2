#include <stdio.h>

int main()
{ int n;
    printf("nhap gia tri n = ");
    scanf("%d",&n);
    if(n<2){
        printf("hay nhap gia tri > 1");
    }
    else {
         printf("%d=",n);
        unsigned i=2;
        while(n>1){
            if(n%i==0){
                printf("%d",i);
                if(n!=i){
                printf(" x ");}
                n/=i;
            }
            else{
                i++;
            }
        }
        
    }

    return 0;
}
