#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);

    int x,y;

    if(x>N && y>N)
    {
        if((x*y)<K)
        {
            printf("%d %d\n",x,y);
        }
    }
    else
    {
        printf("-1\n");
    }
    printf("%d %d\n",x,y);

   return 0;
}
