#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,e,f,g;
    double m,n;
    c=1;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        m=(3.0+sqrt(9.0+8.0*a))/2.0;
        n=ceil(m);
        b=n;
        printf("Case %lld: %lld\n",c,b);
        c++;
    }
    return 0;
}
