#include<stdio.h>
#include<string.h>
int d[1000001];
int main()
{
    long long int a,b,c,e=0,f,g,h,i,j,k,l;
    for(a=0;a<=1000001;a++)
    {
        d[a]=a;
    }
    for(b=1;b<=1000001;b++)
    {
        f=b;
        for(c=b;c!=0;c=c/10)
        {
            f=f+c%10;
        }
        g=f;
        d[g]=0;
    }
    for(h=1;h<=1000001;h++)
    {
        if(d[h]!=0)
            printf("%lld\n",h);
    }
    return 0;
}
