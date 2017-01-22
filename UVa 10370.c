#include<stdio.h>

int main()
{
    int a,b,c,d,e[2050],i,j,k,l;
    double f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        f=0.0;
        g=0.0;
        for(d=0;d<c;d++)
        {
            scanf("%d",&e[d]);
            f=f+e[d];
        }
        f=f/c;
        for(d=0;d<c;d++)
        {
            if(e[d]>f)
                g++;
        }
        f=(g/c)*100.0;
        printf("%.3lf%%\n",f);
    }
    return 0;
}
