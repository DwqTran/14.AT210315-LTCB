#include <stdio.h>
#include <math.h>

int Sohoanhao(int a) {
    int i;
    int tong = 0;
    if (a <= 1) {
        return 0;
    }
    for (i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            tong += i;
        }
    }

    if (tong == a) {
        return 1;
    }
    else {
        return 0; 
    }
}


int main(){
	int a;
	printf("Nhap so ");
	scanf("%d",&a);
	if(Sohoanhao(a)==1){
		printf("%d la so hoan hao\n",a);
	}
	else{
		printf("%d khong la so hoan hao\n",a);
	}
	
	
	return 0;
	
}
