#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g[100],h,i;
    char m[30],n[10];
    while(gets(n))
    {
        b=strlen(n);
        a=n[b-1]-'0';
        if(b-1>0)
            a=a+(n[b-2]-'0')*10;
        if(a==0)
            break;
        e=0;
        f=0;
        for(b=1;b<=a;b++)
        {
            d=0;
            gets(m);
            for(c=0;c<25;c++)
            {
                if(m[c]==' ')
                    d++;
            }
            g[b-1]=d;
            if(b==1)
                f=d;
            if(f>d)
                f=d;
        }
        for(b=1;b<=a;b++)
        {
            e=e+(g[b-1]-f);
        }
        printf("%d\n",e);
    }
    return 0;
}
