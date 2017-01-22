#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d[1050],e,f,g,h,i,j,k,l;
    d[0]=0;
    d[1]=1;
    for(a=2;a<=1050;a++)
    {
        c=0;
        for(b=1;b<=sqrt(a);b++)
        {
            if(a%b==0)
            {
                c=c+b;
                if(a/b!=b)
                    c=c+(a/b);
            }
        }
        d[a]=c;
    }
    c=1;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        for(b=1000;b>=1;b--)
        {
            if(d[b]==a)
            {
                printf("Case %d: %d\n",c,b);
                break;
            }
        }
        if(b==0)
            printf("Case %d: %d\n",c,-1);
        c++;
    }
    return 0;
}
