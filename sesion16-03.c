#include<stdio.h>
void sum(int *a, int *b, int *result);
int main(){
	int x=20;
	int y=30;
	int result=0;
	sum(&x,&y,&result);
	printf("Tong cua hai so la: %d + %d = %d",x,y,result);
}
void sum(int *a, int *b, int *result){
	*result = *a+*b;
}
