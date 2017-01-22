#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h;
    while(scanf("%lf",&a)==1)
    {
        b=floor(a*log10(2)+1);
        c=exp((b-a)*log(2)+b*log(5));
        printf("2^-%.0lf = %.3lfe-%.0lf\n",a,c,b);
    }
    return 0;
}
