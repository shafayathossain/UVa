#include<stdio.h>

int main()
{
    int a,b,c[1000],d,e,f,g,h;
    while((scanf("%d",&a))==1)
    {
        for(b=0;b<a;b++)
        {
            scanf("%d",&c[b]);
        }
        f=0;
        for(b=0;b<a-1;b++)
        {
            for(d=0;d<=(a-2-b);d++)
            {
                if(c[d]>c[d+1])
                {
                    e=c[d];
                    c[d]=c[d+1];
                    c[d+1]=e;
                    f++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",f);
    }
    return 0;
}
