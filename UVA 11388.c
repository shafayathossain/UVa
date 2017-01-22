#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,e,f,g;
    scanf("%lld",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lld %lld",&c,&d);
        if(d%c!=0)
            printf("-1\n");
        else
            printf("%lld %lld\n",c,d);
    }
    return 0;
}
