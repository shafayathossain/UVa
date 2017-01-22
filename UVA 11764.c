#include<stdio.h>

int main()
{
    int a,b,c,d,e[100],f,g,h,i,j;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        f=0;
        g=0;
        scanf("%d",&c);
        for(d=0;d<c;d++)
        {
            scanf("%d",&e[d]);
            if(d>0)
            {
                if(e[d]>e[d-1])
                    f++;
                else if(e[d]<e[d-1])
                    g++;
            }
        }
        printf("Case %d: %d %d\n",b,f,g);
    }
    return 0;
}
