#include<stdio.h>

int main()
{
    int a,b,c,d,e[100],h,i,j,k,l,m;
    int f,g;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;
        for(d=0;d<a;d++)
        {
            e[d]=d+1;
        }
        f=0;
        h=1;
        g=a-1;
        i=0;
        while(i<a)
        {
            while(h!=b+1)
            {
                if(e[f]==0)
                {
                    f++;
                    if(f==a)
                        f=0;
                    continue;
                }
                if(h==b)
                {
                    j=e[f];
                    k=f;
                    printf("%3d",e[f]);
                    i++;
                }

                f++;
                h++;
                if(f==a)
                    f=0;
            }
            h=1;
            if(i==a)
                break;
            while(h!=c+1)
            {
                if(e[g]==0)
                {
                    g--;
                    if(g==-1)
                        g=a-1;
                    continue;
                }
                if(h==c && e[g]!=j)
                {
                    l=g;
                    printf("%3d",e[g]);
                    if(i+1!=a)
                        printf(",");
                    i++;
                }
                if(h==c && e[g]==j)
                {
                    if(i<a)
                        printf(",");
                    l=g;
                    break;
                }
                g--;
                h++;
                if(g==-1)
                    g=a-1;
            }
            e[k]=0;
            e[l]=0;
            h=1;
        }
        printf("\n");
    }
    return 0;
}
