#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%lf",&a)==1)
    {
        if(a==0)
            break;
        scanf("%lf %lf %lf",&b,&c,&d);
        e=0;
        f=0;
        g=0;
        h=0;
        while(e<=a)
        {
            e=f;
            e=e+b-g;
            if(g>b)
            {
                e=e-b+g;
            }
            f=e-c;
            g=g+((d*b)/100.00);
            h++;
            if(f<0)
                break;
        }
        if(e>a)
        {
            printf("success on day %.0lf\n",h);
        }
        else
            printf("failure on day %.0lf\n",h);
    }
    return 0;
}
