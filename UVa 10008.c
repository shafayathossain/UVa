#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e[30],f,g,h,i,j,k,l;
    char m[10000];
    while(gets(m))
    {
        b=strlen(m);
        d=1;
        a=0;
        for(c=b-1;c>=0;c--)
        {
            a=a+(m[c]-'0')*d;
            d=d*10;
        }
        for(b=0; b<30; b++)
            e[b]=0;
        for(b=1; b<=a; b++)
        {
            gets(m);
            c=strlen(m);
            for(d=0; d<c; d++)
            {
                if(m[d]>='A' && m[d]<='Z')
                {
                    e[m[d]-64]++;
                }
                else if(m[d]>='a' && m[d]<='z')
                {
                    e[m[d]-96]++;
                }
            }
        }
        f=0;
        for(b=0; b<30; b++)
        {
            if(e[b]>0)
                f++;
        }
        for(g=1; g<=f; g++)
        {
            c=e[0];
            for(b=0; b<30; b++)
            {
                if(c<e[b])
                    c=e[b];
            }
            for(b=0;b<30;b++)
            {
                if(e[b]==c && c!=0)
                {
                    printf("%c %d\n",b+64,c);
                    e[b]=0;
                }
            }
        }
    }
    return 0;
}
