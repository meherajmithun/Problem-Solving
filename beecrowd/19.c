#include<stdio.h>
int main()
{
    int time,hour,minutes,seconds;
    scanf("%d",&time);
    hour=time/3600;
    time=time%3600;
    minutes=time/60;
    seconds=time%60;
    printf("%d:%d:%d",hour,minutes,seconds);
    return 0;
}
