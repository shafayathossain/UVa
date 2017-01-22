#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    char m[10000];
    gets(m);
    b=strlen(m);
    a=0;
    c=1;
    for(d=b-1;d>=0;d--)
    {
        a=a+(m[d]-'0')*c;
        c=c*10;
    }
    for(b=1;b<=a;b++)
    {
        gets(m);
        c=strlen(m);
        e=0;
        if(m[0]=='B')
        {
            g=1;
            e=1;
        }
        else if(m[0]=='U')
        {
            g=2;
            e=10;
        }
        else if(m[0]=='S')
        {
            g=3;
            e=100;
        }
        else if(m[0]=='P')
        {
            g=4;
            e=1000;
        }
        else if(m[0]=='F')
        {
            g=5;
            e=10000;
        }
        else if(m[0]=='T')
        {
            g=6;
            e=100000;
        }
        else if(m[0]=='M')
        {
            g=7;
            e=1000000;
        }
        h=0;
        i=1;
        for(d=1;d<c;d++)
        {
            if(m[d-1]==m[d])
                i++;
            if(i>9)
                break;
            if(m[d]=='B')
            {
                e=e+1;
                f=1;
            }
            else if(m[d]=='U')
            {
                e=e+10;
                f=2;
            }
            else if(m[d]=='S')
            {
                e=e+100;
                f=3;
            }
            else if(m[d]=='P')
            {
                e=e+1000;
                f=4;
            }
            else if(m[d]=='F')
            {
                e=e+10000;
                f=5;
            }
            else if(m[d]=='T')
            {
                e=e+100000;
                f=6;
            }
            else if(m[d]=='M')
            {
                e=e+1000000;
                f=7;
            }
            if(m[d-1]!=m[d])
                i=1;
            if(h==0 && m[d-1]!=m[d])
            {
                if(f>g)
                {
                    h=1;
                    i=1;
                }
                else if(f<g)
                {
                    h=2;
                    i=1;
                }
                g=f;
            }
            else
            {
                if(h==1 && f<g)
                {
                    break;
                }
                else if(h==2 && f>g)
                {
                    break;
                }
                    g=f;
            }
        }
        if(d!=c)
        {
            printf("error\n");
            continue;
        }
        printf("%d\n",e);
    }
    return 0;
}
