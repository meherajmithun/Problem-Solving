#include<stdio.h>
int main(){
    double a,b,c,x;
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
      }
    else if(a*a==(b*b)+(c*c)){
      printf("TRIANGULO RETANGULO\n");
    }
    else if (a*a>(b*b)+(c*c)){
    printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (a*a<(b*b)+(c*c)){
     printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c && c==a){
     printf("TRIANGULO EQUILATERO\n");
     }
    if (a==b || b==c || c==a)
    {
      printf("TRIANGULO ISOSCELES");
    }
}
