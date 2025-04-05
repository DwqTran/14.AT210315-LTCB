#include <stdio.h>

int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		printf("Nhap vao phan tu thu %d ",i);
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[9];
	for(i=0;i<10;i++){
		if (a[i]<min){
			min = a[i];
		}
	}
	printf("Phan tu be nhat la %d\n",min)
	
	for(i=0;i<10;i++){
		if (a[i]>min){
			max = a[i];
		}
	}
	printf("Phan tu lon nhat la %d\n",max);
	
	return 0;
}
