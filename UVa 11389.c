#include<stdio.h>

int main()
{
    long long int a,b,c,d,e[1000],f[1000],g,h,i,j,k,l,m;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        h=0;
        for(d=1;d<=a;d++)
        {
            scanf("%lld",&e[d-1]);
        }
        for(l=1;l<a;l++)
        {
            k=e[l];
            j=l;
            for(m=l-1;m>=0;m--)
            {
                if(k<e[m])
                {
                    e[j]=e[m];
                    e[m]=k;
                    j--;
                }
                else
                    break;
            }
        }
        for(d=1;d<=a;d++)
        {
            scanf("%lld",&f[d-1]);
        }
        for(l=1;l<a;l++)
        {
            k=f[l];
            j=l;
            for(m=l-1;m>=0;m--)
            {
                if(k>f[m])
                {
                    f[j]=f[m];
                    f[m]=k;
                    j--;
                }
                else
                    break;
            }
        }
        for(l=0;l<a;l++)
        {
            if((e[l]+f[l])>b)
            {
                g=e[l]+f[l];
                g=g-b;
                g=g*c;
                h=h+g;
            }
        }
        printf("%lld\n",h);
    }
    return 0;
}
