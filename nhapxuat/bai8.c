#include <stdio.h>
#include <math.h>
int main(){
    float a , b,c,p,s,m;
    scanf("%f %f %f", &a,&b,&c);
    if(a+b>c || b+c>a || c+a>b){
        if(a== b && b==c){
            printf("Tam giac deu\n");
        }
		else if(b != c && a == b || c!= a && a == b || a!=b && c == b){
            printf("Tam giac can\n");
        if( a*a + b*b  == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
            printf("Tam giac vuong can\n");  
        }
		}
		else if( a*a + b*b  == c*c || a*a + c*c == b*b || b*b + c*c == a*a  ){
            printf("Tam giac vuong\n");
        }
		else{
            printf("Tam giac thuong\n");
        }
        p= a+b+c;
        m = p/2;
        s = sqrt(m*(m-a)*(m-b)*(m-c));
        printf("Chu vi tam giac la %.2f\n", p);
        printf("Dien tich tam giac la %.2f\n",s);
        
    }else{
            printf("Không phai 3 canh tam giac");
        }
        return 0;
    }
