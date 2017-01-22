#include<stdio.h>

int main()
{
    int a[20],b[20],c,d,e=1,f,g,h;
    while(scanf("%d",&a[0])==1)
    {
        if(a[0]<0)
            break;
        for(c=1;c<=12;c++)
        {
            scanf("%d",&a[c]);
        }
        for(c=0;c<12;c++)
        {
            scanf("%d",&b[c]);
        }
        d=0;
        printf("Case %d:\n",e);
        for(c=0;c<12;c++)
        {
            a[c]=a[c]+d;
            if(a[c]>=b[c])
            {
                printf("No problem! :D\n");
                if(b[c]!=0)
                    d=(a[c])-(b[c]);
                else if(b[c]==0)
                    d=a[c];
            }
            else
            {
                printf("No problem. :(\n");
                d=a[c];
            }
        }
        e++;
    }
    return 0;
}
