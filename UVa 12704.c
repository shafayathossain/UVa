#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,h;
    scanf("%lf",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lf %lf %lf",&c,&d,&e);
        f=sqrt(c*c+d*d);
        printf("%.2lf %.2lf\n",e-f,e+f);
    }
    return 0;
}
