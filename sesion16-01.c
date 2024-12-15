#include<stdio.h>
int main(){
	int a = 20;
	// Cach 1: In ra dia chi va gia tri cua a
	printf("Gia tri cua a la: %d\n",a);
	printf("Dia chi cua a la : %d\n",&a);
	
	// Cach 2:In ra dia chi va gia tri cua con tro ptr
	int *ptr = &a;
	printf("Gia tri cua ptr la: %d\n",*ptr);
	printf("Dia chi cua ptr la: %d\n",ptr);
	return 0;
}
