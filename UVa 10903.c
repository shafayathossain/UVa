#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f[150],g[150],h,i,j,k,l;
    char m[15],n[15];
    double w,x,y,z;
    for(c=0;c<150;c++)
    {
        f[c]=0;
        g[c]=0;
    }
    l=1;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        if(l!=1)
            printf("\n");
        scanf("%d",&b);
        b=b*a*(a-1);
        b=b/2;
        for(c=1;c<=b;c++)
        {
            scanf("%d %s %d %s",&d,m,&e,n);
            if(strcmp(m,"paper")==0)
            {
                if(strcmp(n,"rock")==0)
                {
                    f[d]++;
                    g[e]++;
                }
                else if(strcmp(n,"scissors")==0)
                {
                    f[e]++;
                    g[d]++;
                }
            }
            if(strcmp(m,"scissors")==0)
            {
                if(strcmp(n,"paper")==0)
                {
                    f[d]++;
                    g[e]++;
                }
                else if(strcmp(n,"rock")==0)
                {
                    f[e]++;
                    g[d]++;
                }
            }
            if(strcmp(m,"rock")==0)
            {
                if(strcmp(n,"scissors")==0)
                {
                    f[d]++;
                    g[e]++;
                }
                else if(strcmp(n,"paper")==0)
                {
                    f[e]++;
                    g[d]++;
                }
            }
        }
        for(c=1;c<=a;c++)
        {
            if(f[c]==0 && g[c]==0)
            {
                printf("-\n");
            }
            else
            {
                w=f[c];
                x=g[c];
                f[c]=0;
                g[c]=0;
                y=w/(w+x);
                printf("%.3lf\n",y);
                l=0;
            }
        }
    }
    return 0;
}
