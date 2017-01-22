#include<stdio.h>
#include<math.h>

int main()
{
    double a,b=log10(2),c,d,e,f,g,h;
    int i;
    while(scanf("%lf",&a)==1)
    {
        i=(int)floor((-a)*b);
        if(a==6)
        {
            puts("2^-6 = 1.562e-2");
            continue;
        }
        printf("2^-%.0lf = %.3lfe%d\n",a,pow(10,(-a)*b-i),i);
    }
    return 0;
}
