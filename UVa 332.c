#include<stdio.h>

int gcd(long long int a,long long int b)
{
    if(b%a==0)
        return a;
    return gcd(b%a,a);
}

int main()
{
    long long int a,b,c,d,e,f,g,h,l=1;
    double i,j,k,m,n,o,p;
    char x[100];
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
            break;
        scanf("%s",x);
        b=strlen(x);
        j=1.0;
        i=0;
        f=1;
        for(c=0;c<b;c++)
        {
            if(x[c]=='.')
            {
                continue;
            }
            i=i+(x[c]-'0')*j;
            j=j/10.0;
        }
        c=b-1-a;
        e=1;
        for(d=2;d<b;d++)
        {
            e=e*10;
            if(d==c)
                f=e;
        }
        i=i+0.0000000001;
        k=f*i;
        g=k;
        n=i*e;
        h=n;
        c=h-g;
        d=e-f;
        if(c==0 || d==0)
        {
            c=h;
            d=e;
            if(c==0)
                d=1;
        }
        if(c!=0 && d!=0)
        {
            e=gcd(c,d);
            c=c/e;
            d=d/e;
        }
        printf("Case %lld: %lld/%lld\n",l,c,d);
        l++;
    }
    return 0;
}
