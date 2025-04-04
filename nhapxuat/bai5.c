#include <stdio.h>
#include <math.h>

int main(){
  double delta, a,b,c;
  printf("Nhap cac he so cua phuong trinh bac hai");
  scanf("%lf%lf%lf",&a,&b,&c);
  delta = pow(b,2)-(4*a*c);
  if(delta<0){
    printf("Phuong trinh vo nghiem");
  }
  else if(delta==0){
    double x;
    x = -b/(2*a);
    printf("Phuong trinh da cho co nghiem kep x = %.2lf",x);
  }
  else{
    double x1,x2;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("Phuong trinh da cho co 2 nghiem phan biet x1=%.2lf, x2=%.2lf",x1,x2);
  }
  return 0;
}
