#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf",&a);
    for(b=0;b<a;b++)
    {
        scanf("%lf %lf %lf %lf",&c,&d,&e,&f);
        g=(d*(e+f)-(c*e))/f;
        if(g>=0 && g<=10)
            printf("Case #%.0lf: %.2lf\n",b+1,g);
        else
            printf("Case #%.0lf: Impossible\n",b+1);
    }
    return 0;
}
