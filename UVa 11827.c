#include<stdio.h>
#include<string.h>

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    return gcd(b%a,a);
}

int main()
{
    int a,b,c,d,e,f,g[1000],h,i;
    char m[10000];
    gets(m);
    b=strlen(m);
    a=0;
    c=1;
    for(d=b-1;d>=0;d--)
    {
        a=a+(m[d]-'0')*c;
        c=c*10;
    }
    for(b=1;b<=a;b++)
    {
        gets(m);
        c=strlen(m);
        h=0;
        for(d=c-1;d>=0;d--)
        {
            if(m[d]==' ')
                continue;
            e=0;
            f=1;
            while(m[d]!=' ' && d>=0)
            {
                e=e+(m[d]-'0')*f;
                f=f*10;
                d--;
            }
            g[h]=e;
            h++;
        }
        f=0;
        for(d=0;d<h-1;d++)
        {
            for(i=d+1;i<h;i++)
            {
                c=gcd(g[d],g[i]);
                if(f<c)
                    f=c;
            }
        }
        printf("%d\n",f);
    }
    return 0;
}
