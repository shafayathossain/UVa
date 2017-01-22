#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        f=0;
        scanf("%d",&c);
        for(d=1;d<=c;d++)
        {
            scanf("%d",&e);
            if(e>f)
                f=e;
        }
        printf("Case %d: %d\n",b,f);
    }
    return 0;
}
