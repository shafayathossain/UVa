#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j;
    while(scanf("%lf %lf",&a,&b)==2)
    {
        g=b;
        f=1;
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            c=a-b;
            if(b>c)
            {
                d=c;
                c=b;
                b=d;
            }
            for(e=a;e>c;e--)
            {
                f=f*e;
                f=f/b;
                if(b>1)
                    b--;
            }
        }
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",a,g,f);
    }
    return 0;
}
