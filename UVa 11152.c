#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        d=a*b*c;
        e=(a+b+c)*(a+b-c)*(b+c-a)*(c+a-b);
        e=sqrt(e);
        d=d/e;
        e=pi*d*d;
        f=(a+b+c)/2.0;
        g=(f-a)*(f-b)*(f-c);
        h=f*g;
        h=sqrt(h);
        i=g/f;
        i=sqrt(i);
        j=pi*i*i;
        e=e-h;
        h=h-j;
        printf("%.4lf %.4lf %.4lf\n",e,h,j);
    }
    return 0;
}
