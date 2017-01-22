#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        f=0;
        scanf("%d %d",&c,&d);
        if(c%2==0)
            c++;
        if(d%2==0)
            d--;
        for(e=c;e<=d;e+=2)
            f=f+e;
        printf("Case %d: %d\n",b,f);
    }
    return 0;
}
