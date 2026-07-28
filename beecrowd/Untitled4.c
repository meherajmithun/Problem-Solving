#include<stdio.h>
int main(){
    char marks[5]={'a','x','s','w','t'};
    int f=0;
   
    for(int i=0;i<5;i++){
    printf("The alphabets are %d \n",marks[i]);

        f=f+marks[i];

    }
    printf("sum is = %d",f);

    return 0;

}
