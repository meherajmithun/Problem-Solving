#include<stdio.h>
int main(){
    int code1,unit1;
    int code2,unit2;
    double prize1,total1;
    double prize2,total2,total;
    scanf("%d%d%lf",&code1,&unit1,&prize1);
    scanf("%d%d%lf",&code2,&unit2,&prize2);
    total1=unit1*prize1;
    total2=unit2*prize2;
    total=total1+total2;
    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}
