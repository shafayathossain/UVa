#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i;
    scanf("%lld",&a);
    for(b=1;b<=a;b++)
    {
        f=0;
        scanf("%lld %lld %lld",&c,&d,&e);
        if(c+d<=e || d+e<=c || e+c<=d)
        {
            printf("Case %lld: Invalid\n",b);
            continue;
        }
        if(c==d || c==e)
        {
            f++;
        }
        if(d==e)
        {
            f++;
        }
        if(f==2)
            printf("Case %lld: Equilateral\n",b);
        else if(f==1)
            printf("Case %lld: Isosceles\n",b);
        else
            printf("Case %lld: Scalene\n",b);
    }
    return 0;
}
