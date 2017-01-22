#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[11],n[20],o[11];
    m[0]='l';
    while(gets(n))
    {
        a=strlen(n);
        b=0;
        c=1;
        for(d=a-1;d>=0;d--)
        {
            b=b+(n[d]-'0')*c;
            c=c*10;
        }
        if(b==0)
            break;
        gets(n);
        if(strcmp(n,"too high")==0)
        {
            for(a=10;a>=b;a--)
            {
                m[a]='h';
            }
        }
        else if(strcmp(n,"too low")==0)
        {
            for(a=1;a<=b;a++)
                m[a]='l';
        }
        else if(strcmp(n,"right on")==0)
        {
            if(m[b]!='h' && m[b]!='l')
            {
                for(a=1;a<=10;a++)
                    m[a]='p';
                printf("Stan may be honest\n");
            }
            else
            {
                for(a=1;a<=10;a++)
                    m[a]='p';
                printf("Stan is dishonest\n");
            }
        }
    }
    return 0;
}
