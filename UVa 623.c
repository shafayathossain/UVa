#include<stdio.h>

int main()
{
    int a,b,c,d,e,f[100000],g,h,i,j,k,l;
    while(scanf("%d",&a)==1)
    {
        f[0]=1;
        d=0;
        for(b=2;b<=a;b++)
        {
            g=0;
            for(c=0;c<=d;c++)
            {
                e=f[c]*b+g;
                f[c]=e%10;
                g=e/10;
            }
            while(g>0)
            {
                f[c]=g%10;
                c++;
                g=g/10;
            }
            d=c-1;
        }
        printf("%d!\n",a);
        for(b=d;b>=0;b--)
        {
            printf("%d",f[b]);
        }
        printf("\n");
    }
    return 0;
}
