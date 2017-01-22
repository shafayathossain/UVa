#include<stdio.h>

int main()
{
    long long int a,b,c[100000],d[100000],e=0,f,g=0,h,i,j,k,l;
    for(b=0;b<2000;b++)
        d[b]=0;
    while(scanf("%lld",&a)!=EOF)
    {
        f=0;
        for(b=0;b<e;b++)
        {
            if(c[b]==a)
            {
                d[b]++;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            c[e]=a;
            e++;
        }
    }
    for(b=0;b<e;b++)
    {
        printf("%lld %lld\n",c[b],d[b]+1);
    }
    return 0;
}
