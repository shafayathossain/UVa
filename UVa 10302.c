#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i;
    while(scanf("%lld",&a)==1)
    {
        b=(a*(a+1))/2;
        b=b*b;
        printf("%lld\n",b);
    }
    return 0;
}
