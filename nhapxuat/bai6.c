#include <stdio.h>
#include <math.h>

int main(){
	printf("Cho he phuong trinh 2 an sau\n    ax + by = c\n    dx + ey = f\nNhap vao cac he so a,b,c,d,e,f\n");
	float a,b,c,d,e,f,x,y;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	/*
	Lap ma tran mo rong va tinh dinh thuc
	                     a  b  c
	                     d  e  f
	                     
	*/
	float D,Dx,Dy;
	D = a*e - b*d; Dx = b*f - c*e; Dy = a*f - c*d;
	if (D == 0) {
        if (Dx == 0 && Dy == 0) {
            printf("He phuong trinh co vo so nghiem.\n");
        } else {
            printf("He phuong trinh vo nghiem.\n");
        }
    } 
	else {
        // Tinh nghiem x va y
        x = Dx / D;
        y = Dy / D;
        printf("Nghiem cua he phuong trinh la:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

	return 0;
}
