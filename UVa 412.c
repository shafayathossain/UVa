#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    return gcd(b%a,a);
}
int main()
{
    int a,b,c[100],d,e,f,g,h,i,j,k;
    double m,n,o,p;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        h=(a*(a-1))/2;
        for(b=0; b<a; b++)
        {
            scanf("%d",&c[b]);
        }
        g=0;
        for(d=0; d<a-1; d++)
        {
            for(e=d+1; e<a; e++)
            {
                f=gcd(c[d],c[e]);
                if(f==1)
                    g++;
            }
        }
        if(g>0)
        {
            m=(h*6.0)/g;
            m=sqrt(m);
            printf("%.6lf\n",m);
        }
        else
            printf("No estimate for this data set.\n");
    }
    return 0;
}
