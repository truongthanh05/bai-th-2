#include <stdio.h>
void swap(int &x, int &y)

{

int t=x; x=y; y=t;

}
int main()
{int x=2,y=5;
    printf("Hello World");

swap(x,y);
printf("%dx %dy",x,y);
    return 0;
}
