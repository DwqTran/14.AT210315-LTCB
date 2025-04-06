#include <stdio.h>
#include <math.h>

int Luythua(float x, float y){
	float ketqua=1;
	if(y==0){
		return 1;
	}
	if(x==0&&y!=0){
		return 0;
	}
	else {
		ketqua = pow(x,y);
		return ketqua;
	}
}

int main(){
	float x,y;
	printf("Nhap vao x va y ");
	scanf("%f%f",&x,&y);
	float ketqua;
	ketqua = Luythua(x,y);
	printf("%.2f^%.2f=%.2f",x,y,ketqua);
	
	return 0;
}
