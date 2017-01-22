#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        h=0;
        i=0;
        scanf("%d %d %d",&c,&d,&e);
        for(f=0;f<c;f++)
        {
            scanf("%d",&g);
            i=i+g;
            h++;
            if(h>d || i>e)
            {
                i=i-g;
                h--;
            }
        }
        printf("Case %d: %d\n",b,h);
    }
    return 0;
}
