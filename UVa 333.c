#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[100],n[100];
    while(gets(n))
    {
        c=0;
        e=0;
        g=1;
        h=0;
        int d[100];
        a=strlen(n);
        b=0;
        while(n[b]==' ')
        {
            n[b]='`';
            b++;
        }
        b=a-1;
        while(n[b]==' ')
        {
            n[b]='`';
            b--;
        }
        for(b=0;b<a;b++)
        {
            if(n[b]!='`')
            {
                m[h]=n[b];
                h++;
            }
        }
        m[h]='\0';
        a=strlen(m);
        for(b=0;b<a;b++)
        {
            if((m[b]>='0' && m[b]<='9') || (g==10 && m[b]=='X'))
            {
                if(m[b]=='X')
                    f=10;
                else
                    f=m[b]-'0';
                c=c+f;
                d[e]=c;
                e++;
                g++;
            }
            else if(m[b]!='-' && m[b]!=' ')
                break;
        }
        if(b!=a)
            printf("%s is incorrect.\n",m);
        else if(g!=11)
            printf("%s is incorrect.\n",m);
        else
        {
            c=0;
            for(b=0;b<e;b++)
                c=c+d[b];
            if(c%11==0)
                printf("%s is correct.\n",m);
            else
                printf("%s is incorrect.\n",m);
        }
    }
    return 0;
}
