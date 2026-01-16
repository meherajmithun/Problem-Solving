#include<stdio.h>
int main(){
    int tk,need[7],notes[7]={100,50,20,10,5,2,1};
    scanf("%d",&tk);
    printf("%d\n",tk);
    for(int i=0;i<7;i++){
    need[i]=tk/notes[i];
    tk=tk%notes[i];
    }
    printf("%d nota(s) de R$ 100,00\n", need[0]);
    printf("%d nota(s) de R$  50,00\n", need[1]);
    printf("%d nota(s) de R$  20,00\n", need[2]);
    printf("%d nota(s) de R$  10,00\n", need[3]);
    printf("%d nota(s) de R$   5,00\n", need[4]);
    printf("%d nota(s) de R$   2,00\n", need[5]);
    printf("%d nota(s) de R$   1,00\n", need[6]);
    return 0;
}
