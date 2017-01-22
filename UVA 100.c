#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        g=a;
        h=b;
        if(a>b)
        {
            g=b;
            h=a;
        }
        f=0;
        for(c=g;c<=h;c++)
        {
            d=c;
            e=0;
            while(d!=1)
            {
                if(d%2==1)
                {
                    d=d*3+1;
                    e++;
                }
                else
                {
                    d=d/2;
                    e++;
                }
            }
            if((e+1)>f)
                f=(e+1);
        }
        printf("%lld %lld %lld\n",a,b,f);
    }
    return 0;
}
