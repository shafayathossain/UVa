#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,h,i=0,j,k,l;
    double e=0.0,f=0.0,g;
    char m[100],n[100];
    while(gets(m))
    {
        a=strlen(m);
        c=0;
        for(b=0; b<a; b++)
        {
            if(m[b]>='a' && m[b]<='z')
            {
                c=c+m[b]-96;
            }
            else if(m[b]>='A' && m[b]<='Z')
            {
                c=c+m[b]-64;
            }
        }
        while(c/10!=0)
        {
            d=0;
            while(c!=0)
            {
                d=d+(c%10);
                c=c/10;
            }
            c=d;
        }
        if(i%2==0)
        {
            e=c;
            i++;
        }
        else
        {
            f=c;
            if(e>f)
            {
                g=f;
                f=e;
                e=g;
            }
            if(e!=0.0 || f!=0.0)
            {
                e=(e/f);
                e=e*100.0;
                printf("%.2lf %%",e);
                e=0.0;
                f=0.0;
            }
            i++;
            printf("\n");
        }
    }
    return 0;
}
