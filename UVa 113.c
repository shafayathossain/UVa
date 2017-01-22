#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%lf %lf",&a,&b)==2)
    {
        c=log(b);
        c=c/a;
        d=exp(c);
        printf("%.0lf\n",d);
    }
    return 0;
}
