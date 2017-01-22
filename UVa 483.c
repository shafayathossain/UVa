#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g;
    char m[1000],n[1000];
    while(gets(m))
    {
        a=strlen(m);
        for(b=0;b<a;b++)
        {
            c=0;
            d=b;
            while(m[d]!=' ' && m[d]!='\0')
            {
                n[c]=m[d];
                c++;
                d++;
            }
            c--;
            for(e=b;e<d;e++)
            {
                m[e]=n[c];
                c--;
                b++;
            }
        }
        puts(m);
    }
    return 0;
}
