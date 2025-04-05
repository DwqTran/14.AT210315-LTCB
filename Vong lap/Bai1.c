#include <stdio.h>

int main(){
	int a[100],i;
	int tong = 0;
	printf("Nhap vao 10 so bat ki ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		tong += a[i];
	}
	printf("%d\n",tong);
	return 0;
}
