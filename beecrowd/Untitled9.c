#include<stdio.h>
#include<math.h>
int main(){
   double a,b,c,squareroot;
    scanf("%lf%lf%lf",&a,&b,&c);
    double m=b*b-4*a*c;
    double n=(-b*sqrt(m))/(2*a);
    printf("%.5lf",n);
    return 0;


}
