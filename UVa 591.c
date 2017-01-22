#include<stdio.h>

int main()
{
    int a,b,c[60],d,e,f=1,g;
    while(scanf("%d",&a)==1)
    {

        if(a==0)
            break;
        else
        {
            d=0;
            for(b=0;b<a;b++)
            {
                scanf("%d",&c[b]);
                d=d+c[b];
            }
            d=d/a;
            e=0;
            for(b=0;b<a;b++)
            {
                if(c[b]-d<=0)
                    continue;
                else
                {
                    e=e+c[b]-d;
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n",f,e);
            printf("\n");
            f++;
        }
    }
    return 0;
}
