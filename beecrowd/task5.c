#include<stdio.h>
int main(){
    int a;
    double area,pi;
    pi=3.14159;
    scanf("%d",&a);

    area=(4.0/3)*pi*a*a*a;
    printf("VOLUME = %.3lf\n",area);

    return 0;

}
