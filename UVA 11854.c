#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
