#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF)
    {
        if(a*tan(d*pi/180.0)<=c)
        {
            e=a*tan(d*pi/180.0);
            e=e*.5*a;
            f=a*c;
            f=f-e;
            f=f*b;
            printf("%.3lf mL\n",f);
        }
        else
        {
            e=c/tan(d*pi/180.0);
            e=e*.5*c;
            f=b*e;
            printf("%.3lf mL\n",f);
        }
    }
    return 0;
}
