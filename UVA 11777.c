#include<stdio.h>

int main()
{
    int a,b,c[10],d,e,f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        e=0;
        f=60;
        g=0;
        for(d=0;d<7;d++)
        {
            scanf("%d",&c[d]);
            if(d<4)
                e=e+c[d];
            else
            {
                if(f>c[d])
                    f=c[d];
                g=g+c[d];
            }
        }
        g=g-f;
        e=e+g/2;
        if(e>=90)
            printf("Case %d: A\n",b);
        else if(e>=80)
            printf("Case %d: B\n",b);
        else if(e>=70)
            printf("Case %d: C\n",b);
        else if(e>=60)
            printf("Case %d: D\n",b);
        else
            printf("Case %d: F\n",b);
    }
    return 0;
}
