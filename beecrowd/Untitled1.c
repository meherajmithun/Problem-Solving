#include<stdio.h>

int main(){
    char name[100];
    double salary,sell,total;

    scanf("%s\n",&name);
    scanf("%lf\n",&salary);
    scanf("%lf",&sell);

    total=salary+(sell*0.15);
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;

}
