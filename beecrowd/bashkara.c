#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double m=(b*b)-4*(a*c);
    if(m>0)
    {
        if(a>0)
        {
            double n=(-b+sqrt(m))/(2*a);
            double x=(-b-sqrt(m))/(2*a);
            printf("R1 = %.5lf\n",n);
            printf("R2 = %.5lf\n",x);
        }

        else if(a<=0)
        {
            printf("Impossivel calcular\n");
        }
    }
    else if(m<=0)
    {
        printf("Impossivel calcular\n");
    }

return 0;

}

