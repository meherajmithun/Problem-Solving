#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
    printf("%d",a);
     if(b>a){
     printf("%d",b);
     }
     if(c>a){
     printf("%d",c);
     }
    }
    if(b>a && b>c){
    printf("%d",b);
     if(a>b){
     printf("%d",a);
     }
     if(c>a){
     printf("%d",c);
     }
    }
    if(c>a && c>b){
    printf("%d",c);
     if(a>b){
     printf("%d",a);
     }
     if(b>a){
     printf("%d",c);
     }
    }
}
