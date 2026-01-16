#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    long a,b;
    for(i = 0;i < n;i++){
        scanf("%ld %ld",&a,&b);
        if(a>b){
            printf(">\n");
        }
        else if (a<b){
            printf("<\n");
        }
        else if (a==b){
            printf("=\n");
        }
    }
    return 0;
}

