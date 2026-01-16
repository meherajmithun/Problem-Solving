#include<stdio.h>
int main(){
    int a,hours,minutes,seconds;
    scanf("%d",a);

    if(a%3600!=0)
    {
        printf(":%d",hours);
    }
    if(a%60!=0)
    {
        printf(":%d",minutes);
    }

}
