#include <stdio.h>
#include <math.h>

int main(){
	float diem;
	printf("Nhap vao so diem \n");
	scanf("%f",&diem);
	if(0<=diem&&diem<5){
		printf("Yeu");
	}
	else if(diem>=5&&diem<7){
		printf("Trung binh");
	}
	else if(diem>=7&&diem<8){
		printf("Kha");
	}
	else if(diem>=8&&diem<9){
		printf("Gioi");
	}
	else if(diem>9&&diem<=10){
		printf("Xuat sac");
	}
	else {
		printf("Diem khong dung");
	}
	return 0;
	
}
