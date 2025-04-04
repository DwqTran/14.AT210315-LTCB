#include <stdio.h>
#include <math.h>

int main(){
		int thang, nam;
	printf("Thang  nam  ");
	scanf("%d%d", &thang, &nam);
	if (0 < thang && thang <= 12 && nam > 0) {
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0) ){          // Xet nam nhuan
			if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
				printf("Thang %d nam %d co 31 ngay.\n", thang,nam);
			}
			if (thang == 2) {
				printf("Thang 2 nam %d co 29 ngay.\n",nam);
			}
			else {
				printf("Thang %d nam %d co 30 ngay.\n", thang,nam);
			}
		}
		else {                                         // Nam khong nhuan
			if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
				printf("Thang %d nam %d co 31 ngay.\n", thang,nam);
			}
			if (thang == 2) {
				printf("Thang 2 nam %d co 28 ngay.\n",nam);
			}
			else {
				printf("Thang %d nam %d co 30 ngay.\n", thang,nam);
			}
		}
	}
	else {
		printf("INVALID");
	}

	return 0;
}
