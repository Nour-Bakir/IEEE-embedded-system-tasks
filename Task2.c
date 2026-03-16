#include <stdio.h>
int setBit(int num,int pos);
int clrBit(int num,int pos);
int togBit(int num,int pos);
int main(){
	int x=0;
	x=togBit(x,0);
	printf("%d\n",x);
	x=clrBit(x,0);
	printf("%d\n",x);
	x=setBit(x,0);
	printf("%d",x);

}
int setBit(int num,int pos){
	num = num | (1<<pos);
	return num;
}
int clrBit(int num,int pos){
	num = num & ~(1<<pos);
	return num;
}
int togBit(int num,int pos){
	num = num ^ (1<<pos);
}