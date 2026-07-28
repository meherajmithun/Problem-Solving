#include<stdio.h>
int main(){
    int x,y;
    double total,price;
    scanf("%d%d",&x,&y);
    switch(x){
    case 1:
         total=y*4.00;

    case 2:
         total=y*4.50;

    case 3:
        total=y*5.00;

    case 4:
        total=y*2.00;

    case 5:
        total=y*1.00;

    }
    printf("Total : R$ %.2f",total);

    return 0;
}
