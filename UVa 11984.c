#include<stdio.h>

double cel(double a)
{
    double b;
    b=(9.0*a/5.0)+32;
    return b;
}
double fah(double a)
{
    double b;
    b=5.0*(a-32.0)/9.0;
    return b;
}
int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf",&h);
    for(g=1;g<=h;g++)
    {
        scanf("%lf %lf",&a,&b);
        c=cel(a);
        b=b+c;
        c=fah(b);
        printf("Case %.0lf: %.2lf\n",g,c);
    }
    return 0;
}
