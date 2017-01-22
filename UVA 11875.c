#include<stdio.h>

int main()
{
    int a,b,c,d,e[10],f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        for(d=0;d<c;d++)
        {
            scanf("%d",&e[d]);
        }
        for(d=0;d<c-1;d++)
        {
            for(f=0;f<=(c-2-d);f++)
            {
                if(e[f]>e[f+1])
                {
                    g=e[f];
                    e[f]=e[f+1];
                    e[f+1]=g;
                }
            }
        }
        c=c-1;
        c=c/2;
        printf("Case %d: %d\n",b,e[c]);
    }
    return 0;
}
