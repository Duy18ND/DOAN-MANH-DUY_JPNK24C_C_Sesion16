#include<stdio.h>
void result(int *x, int *y);
int main(){
	//khai bao gia tri 2 bien bat ky
	int a = 20;
	int b = 10;
	//in gia tri truoc va sau khi thay doi
	printf("Gia tri hien tai la: \na = %d\n b = %d\n",a,b);
	result(&a, &b);
	 printf("Gia tri sau khi thay doi la: \n a = %d\n b = %d \n",a,b);
	return 0;
}
	//xay dung ham tien hanh doi gia tri 2 bien cho nhau
void result(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
