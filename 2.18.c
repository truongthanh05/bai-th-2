#include <stdio.h>

int main()
{   float a;
    printf("nhap vao do chinh xac a = ");
    scanf("%f",&a);
    int k=0;
    double dk=1.0/(2*k+1);
    double mu=-1;
    double xichma=0;
    while(dk>=a){
       dk=1.0*1/(2*k+1);
        xichma+=-1*mu*dk;
        mu*=-1;
        k++;
        
    }
    double pi=4*xichma;
    printf("pi = %.8lf",pi);

    return 0;
}
