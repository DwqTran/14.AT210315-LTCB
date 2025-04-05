#include <stdio.h>


int main(){
	int a[10]={2,-4,6,-7,9,21,-34,56,-87,99};
	int i;
	int tong=0;
	int tongsoduong=0;
	int tongsoam=0;
	float TBC=0;
	float TBCduong=0;
	float TBCam=0;
	for(i=0;i<10;i++){
		tong+=a[i];
	}
	printf("Tong cac so trong mang la %d \n",tong);
	for(i=0;i<10;i++){
		if(a[i]>0){
			tongsoduong += a[i];
		}
	}
	printf("Tong cac so nguyen duong trong mang la %d \n",tongsoduong);
	for(i=0;i<10;i++){
		if(a[i]<0){
			tongsoam += a[i];
		}
	}
	printf("Tong cac so nguyen am trong mang la %d \n",tongsoam);
	int count=0;
	printf("TBC cac so trong mang la %d \n",tong/10);
	
	for(i=0;i<10;i++){
		if(a[i]>0) {
	      count++;
	}
		if(count>0){
			TBCduong = tongsoduong/count;
		}
		if(count==0){
			printf("Trong mang khong co phan tu nguyen duong");
		}
	}
	printf("TBC cac so nguyen duong trong mang la %.3f \n",TBCduong);
	for(i=0;i<10;i++){
		if(a[i]<0) {
	      count++;
	}
		if(count>0){
			TBCam = tongsoam/count;
		}
		if(count==0){
			printf("Trong mang khong co phan tu nguyen am");
		}
	}
	printf("TBC cac so nguyen am trong mang la %.3f \n",TBCam);
	
	return 0;
}
