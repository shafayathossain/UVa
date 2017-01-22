#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h;
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
            break;
        b=a*(a+1);
        b=b/2;
        printf("%lld\n",b+1);
    }
    return 0;
}
