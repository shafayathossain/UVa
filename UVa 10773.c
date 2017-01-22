#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lf %lf %lf",&c,&d,&e);
        if(d>=e || d==0)
        {
            printf("Case %.0lf: can't determine\n",b);
            continue;
        }
        f=c/sqrt(e*e-d*d);
        g=c/e;
        h=f-g;
        if(h<0)
            h=h*-1;
        printf("Case %.0lf: %.3lf\n",b,h);
    }
    return 0;
}
