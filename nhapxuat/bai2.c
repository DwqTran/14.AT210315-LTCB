#include <stdio.h>
#include <math.h>

int main () {
	printf("Nhap vao ngay dd thang mm nam yy ");
	int d,m,y;
	scanf("%d%d%d",&d,&m,&y);
	if(y>0){
		switch (m){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(0<d && d<=31){
					printf("%d / %d / %d \n",d,m,y); 
				}
				else{
					printf("Ngay khong hop le\n");
				}
				break; 
			case 4: case 6:	case 9: case 11:
				if(0<d && d<=30){ 
					printf("%d / %d / %d \n",d,m,y); 
				}
				else{
					printf("Ngay khong hop le\n"); 
				}
				break; 
			case 2:
				if((y%400==0)||(y%4==0 && y%100!=0)){ 
					if(0<d && d<=29){
					printf("%d / %d / %d \n",d,m,y); 
					}
				    else{
					printf("Ngay khong hop le\n");
					}
				}
				else{
					if(0<d && d<=28){
					printf("%d / %d / %d \n",d,m,y);
					}
				    else{
					printf("Ngay khong hop le\n");
					}
				}
				break;
			default:
				printf("Thang khong hop le\n");
				break;
		}
	}
	else{
		printf("Nam khong hop le\n");
	}
	return 0;
}
