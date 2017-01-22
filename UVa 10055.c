#include<stdio.h>

int main()
{
    long long int a,b,c,d;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        c=a-b;
        if(c<0)
            c=c*(-1);
        printf("%lld\n",c);
    }
    return 0;
}
