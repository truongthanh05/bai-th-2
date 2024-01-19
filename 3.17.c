#include<stdio.h>
#include<stdbool.h>
bool ktang(int i){
	int a,b,c,dao;
	b=a%10;
	a/=10;
	while(i>0){
		dao=a%10;
		a/=10;
		if(b>dao){
			c==0;	}
		else{
			c=1;}
		b=dao;	}
	if(c==0){
		return false;}
	else return true;}
bool kgiam(int i){
	int a,b,c,dao;
	b=a%10;
	a/=10;
	while(i>0){
		dao=a%10;
		a/=10;
		if(b<dao){
			c==0;}
		else{
			c=1;
		}
		b=dao;
	}
	if(c==0){
		return false;}
	else return true;}
bool tong(int i){
	int tongchan=0,tongle=0;
	int dao=0,a;
	while(i>0){
		dao=a%10;
		a/=10;
		if(dao%2==0){
			tongchan+=dao;}
		else tongle+=dao;}
		if(tongchan==tongle){
			return true;}
		else return false;}
int main(){
	for(int i=100000000000;i<=999999999999;i++){
		if(ktang(i) && kgiam(i) && tong(i)){
			printf("%d",i);
		}}
	return 0;
}