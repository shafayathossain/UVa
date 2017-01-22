#include<stdio.h>

struct building
{
    int a;
    int b;
    int c;
};

int main()
{
    int a=0,b,c,d,e,f,g,h,i,j,k,l,m=0,n,o,p,q=0,r,s,t;
    struct building x[5000];
    freopen("input2.txt","r",stdin);
    while(scanf("%d %d %d",&x[a].a,&x[a].b,&x[a].c)==3)
    {
    	a++;
    }
    l=0;
    g=-50001;
    f=-50001;
    t=-50001;
    for(b=0;b<a;b++)
    {
        if(x[b].a<=g)
        {
            continue;
        }
        g=-50001;
        if(l==0)
        {
            if(m==0)
                printf("%d",x[b].a);
            else
                printf(" %d",x[b].a);
            m++;
        }
        l++;
        r=x[b].b;
        s=b;
        while(x[b].a==x[b+1].a)
        {
            if(t==x[b].a)
                break;
            if(r<x[b+1].b)
            {
                s=b+1;
            }
            b++;
        }
        t=x[b].a;
        b=s;
        printf(" %d",x[b].b);
        for(c=0;x[c].a<=x[b].c;c++)
        {
            if(x[c].a<f)
                continue;
            f=-50001;
            if(x[c].a>=x[b].a && x[c].a<=x[b].c && x[c].b>x[b].b)
            {
                b=c-1;
                l=0;
                break;
            }
        }
        if(l==0)
            continue;
        n=0;
        c=b;
        while(x[c].b==x[c+1].b && x[c].a<=x[b].c)
        {
            b++;
            c=b;
        }
        printf(" %d",x[b].c);
        d=0;
        e=0;
        for(c=0;x[c].a<=x[b].c;c++)
        {
            if(x[c].c>x[b].c && d<x[c].b)
            {
                d=x[c].b;
                e=c;
            }
        }
        if(d>0)
        {
            f=x[b].c;
            l=2;
            b=e-1;
            continue;
        }
        l=0;
        printf(" %d",d);
        g=x[b].c;
    }
    printf("\n");
    return 0;
}
