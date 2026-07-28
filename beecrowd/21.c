#include<stdio.h>
int main(){
    int need[6],notes[6]={100,50,20,10,5,2};
    float tk,coins[6]={1,0.50,0.25,0.10,0.05,0.01};
    scanf("%f",&tk);
    for(int i=0;i<6;i++){
    need[i]=tk/notes[i];
    tk=tk%notes[i];
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",need[0]);
    printf("%d nota(s) de R$  50.00\n",need[1]);
    printf("%d nota(s) de R$  20.00\n",need[2]);
    printf("%d nota(s) de R$  10.00\n",need[3]);
    printf("%d nota(s) de R$   5.00\n",need[4]);
    printf("%d nota(s) de R$   2.00\n",need[5]);

}
