#include<stdio.h>

int main()
{
    int a,b,c,d[150],e,f,g,h,i,j;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        i=0;
        c=0;

        for(f=0; f<a; f++)
        {
            d[f]=f+1;
        }
        f=0;
        j=0;
        for(e=i; e<a; e++)
        {
            if(d[e]!=0)
            {
                f++;
            }
            if(f==b && d[e]!=0)
            {
                g=e;
                d[e]=0;
            }
            if(f==b+b && d[e]!=0)
            {
                d[g]=d[e];
                d[e]=0;
                e=g;
                f=0;
                j++;
            }
            if(e+1==a)
            {
                e=-1;
            }
            if(j==a-1)
            {
                break;
            }
        }
        for(e=0; e<a; e++)
        {
            if(d[e]!=0)
            {
                c=d[e];
                break;
            }
        }
        i=(a-c+1)%a+1;
        printf("%d\n",i);
    }
}
