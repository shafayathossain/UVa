#include<stdio.h>

int gcd(int a, int b)
{
    int c;
    if(a==0)
    {
        return b;
    }
    return c=gcd(b%a,a);
}
int main()
{
    int a,b,c,d,e,f,g,h;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        f=0;
        for(b=1;b<a;b++)
        {
            for(c=b+1;c<=a;c++)
            {
                e=gcd(b,c);
                f=f+e;
            }
        }
        printf("%d\n",f);
    }
    return 0;
}
