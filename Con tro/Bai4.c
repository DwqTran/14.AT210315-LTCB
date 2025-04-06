#include <stdio.h>

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	
	int mang[100];
	int i;
	for(i=0;i<10;i++){
		printf("Nhap vao phan tu thu %d cua mang ",i);
		scanf("%d ",&mang[i]);
	}
	int j;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(mang[i]>mang[j]){
				swap(&mang[i],&mang[j]);
			}
		}
	}
	printf("Cac phan tu trong mang sap xep theo thu tu tang dan la : ");
	for(i=0;i<10;i++){
		printf("%d ",mang[i]);
	}
	return 0;
}
