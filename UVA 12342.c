#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf",&a);
    for(b=1;b<=a;b++)
    {
        e=0;
        d=0;
        scanf("%lf",&c);
        while(c>0)
        {
            if(d==0)
            {
                e=0;
                c=c-180000;
                d++;

                continue;
            }
            if((c-300000)>=0 && d==1)
            {
                e=e+0.1*300000;
                d++;
                c=c-300000;

                continue;
            }
            else if((c-300000)<0 && d==1)
            {
                f=c*0.1;
                f=ceil(f);
                if(f<2000)
                    e=e+2000;
                else
                    e=e+f;
                c=c-300000;
                d++;

                continue;
            }
            if(d==2)
            {
                if(c>=400000)
                {
                    e=e+400000*.15;
                }
                else
                {
                    f=c*.15;
                    f=ceil(f);
                    e=e+f;
                }
                d++;
                c=c-400000;

                continue;
            }
            if(d==3)
            {
                if(c>=300000)
                {
                    e=e+300000*.2;
                }
                else
                {
                    f=c*.2;
                    f=ceil(f);
                    e=e+f;
                }
                d++;
                c=c-300000;

                continue;
            }
            if(d==4)
            {
                f=c*.25;
                f=ceil(f);
                e=e+f;

                break;
            }
        }
        printf("Case %.0lf: %.0lf\n",b,e);
    }
    return 0;
}
