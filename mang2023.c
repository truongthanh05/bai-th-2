#include<stdio.h>
#define LENGHT 10
int* nhap(){
	static int arr[LENGHT];
	for(int i=0;i<LENGHT;i++){
		scanf("%d",&arr[i]);
		}
		return arr;
}
void hienthi(const int arr[]){
	for(int i=0;i<LENGHT;i++){
		printf("%5d ",arr[i]);
	}
}
int main(){
	int *b;
	static int arr[LENGHT];
	b=nhap();
	hienthi(arr);
	return 0;
}
/*#include <stdio.h>
void Input(int a[ ], int n)
{
    printf("\n nhap so phan tu cua mang:");
scanf("%d", &n);
for (int i=0; i<n; i++){
printf("nhap a[%d]= ", i);
scanf("%d", &a[i]);
}}
int main(){
    int n;
    int a[n];
    Input(a,n);
    return 0;
}
