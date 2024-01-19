#include <stdio.h>
#include<math.h>

int main()
{   float a,x;
    printf("nhap va0 do chinh xac a > 0 : ");
    scanf("%f",&a);
    printf("nhap vao so thuc x : ");
    scanf("%f",&x);
    int k=0;
    int gt=1;
    double xm=0;
   
    
    double dk=pow(x,k)/1;
   
    while(fabs(dk)>=a){
         for(int i=k;i>=1;i--){
            gt*=i;
        }
        
        dk=fabs(pow(x,k)/gt);
        xm+=pow(x,k)/gt;
        k++;
        gt=1;
    }
    printf("e^x = %.8lf",xm);
    

    return 0;
}