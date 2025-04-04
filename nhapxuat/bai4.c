#include <stdio.h>
#include <math.h>

int main(){
  double R,S,V;
  printf("Nhap vao ban kinh R = ");
  scanf("%lf",&R);
  S=4*3.14*pow(R,2);
  V=(4.0/3)*3.14*pow(R,3);
  printf("Dien tich khoi cau la S = %.2lf\n",S);
  printf("The tich khoi cau la V = %.2lf",V);
  return 0;
}
