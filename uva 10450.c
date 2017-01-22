#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lf",&l);
        l+=2;
        c=sqrt(5);
        d=1/c;
        e=(1+c)/2;
        f=(1-c)/2;
        e=pow(e,l);
        f=pow(f,l);
        g=e-f;
        g=g*d;
        printf("Scenario #%.0lf:\n%.0lf\n",b,g);
            printf("\n");
    }
    return 0;
}
