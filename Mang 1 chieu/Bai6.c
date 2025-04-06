#include <stdio.h>


int main (){
	int mang[10]={1,-2,3,-4,5,-6,7,-8,9,-10};
	int i;
	for(i=0;i<10;i++){
		if(mang[i]<0){
			mang[i]=0;
		}
	}
	printf("Cac phan tu trong mang sau khi fix la : ");
	for(i=0;i<10;i++){
		printf("%d ",mang[i]);
	}
	return 0;
}
