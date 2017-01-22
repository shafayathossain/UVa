#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lld",&a);
    for(b=0;b<a;b++)
    {
        scanf("%lld",&c);
        d=c*(c-1)/2;
        if(d%2==0)
        {
            d=d/2;
            printf("Case %lld: %lld\n",b+1,d);
        }
        else
            printf("Case %lld: %lld/2\n",b+1,d);
    }
    return 0;
}
