#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    while(scanf("%lld %lld %lld %lld",&d,&a,&b,&c)==4)
    {
        if(d==0 && a==0 && b==0 && c==0)
            break;
        b=(b+9)%12;
        c=c-(b/10);
        n=365*c+c/4-c/100+c/400+(b*306+5)/10+a-1;
        n=n+d;
        e=(10000*n+14780)/3652425;
        f=n-(365*e+e/4-e/100+e/400);
        if(f<0)
        {
            e=e-1;
            f=n-(365*e+e/4-e/100+e/400);
        }
        h=(100*f+52)/3060;
        g=(h+2)%12+1;
        e=e+(h+2)/12;
        i=f-(h*306+5)/10+1;
        printf("%lld %lld %lld\n",i,g,e);
    }
    return 0;
}
