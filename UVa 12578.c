#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h,i;
    scanf("%lf",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lf",&c);
        d=c*2.0;
        d=d/10.0;
        e=(c*6.0)/10.0;
        f=3.14159265359*d*d;
        e=e*c;
        e=e-f;
        printf("%.2lf %.2lf\n",f,e);
    }
    return 0;
}
