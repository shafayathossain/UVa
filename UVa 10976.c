#include<stdio.h>

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    return gcd(b%a,a);
}

int main()
{
    int a,b,c,d,e,f,g[100000],h,i[100000],j,k,l;
    double m,n,o,p;
    while(scanf("%d",&a)==1)
    {
        h=0;
        for(b=a+1;b<=2*a;b++)
        {
            c=b*a;
            d=b-a;
            e=gcd(c,d);
            m=c/e;
            n=d/e;
            o=m/n;
            f=o;
            if(m-f==0.00000000000000000000000)
            {
                g[h]=b;
                i[h]=f;
                h++;
            }
        }
        printf("%d\n",h);
        for(b=0;b<h;b++)
        {
            printf("1/%d = 1/%d + 1/%d\n",a,i[b],g[b]);
        }
    }
    return 0;
}
