#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[200],n[200];
    gets(m);
    b=strlen(m);
    a=0;
    c=1;
    for(f=b-1;f>=0;f--)
    {
        a=a+(m[f]-'0')*c;
        c=c*10;
    }
    for(b=1;b<=a;b++)
    {
        gets(m);
        c=strlen(m);
        if(c%2==1)
        {
            printf("No\n");
            continue;
        }
        for(d=0;d<c/2;d++)
        {
            f=0;
            g=strlen(m);
            for(e=0;e<g;e++)
            {
                if(m[e]=='(' && m[e+1]!=')')
                {
                    n[f]=m[e];
                    f++;
                }
                else if(m[e]=='[' && m[e+1]!=']')
                {
                    n[f]=m[e];
                    f++;
                }
                else if(m[e]==')' && m[e-1]!='(')
                {
                    n[f]=m[e];
                    f++;
                }
                else if(m[e]==']' && m[e-1]!='[')
                {
                    n[f]=m[e];
                    f++;
                }
            }
            n[f]='\0';
            for(f=0;f<e;f++)
            {
                m[f]=n[f];
            }
            m[f]='\0';
        }
        c=strlen(m);
        if(c==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
