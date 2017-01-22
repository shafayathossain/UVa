#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,d,e,f;
    int c=2;
    char m[1000],n[1000];
    freopen("input.txt","r",stdin);
    while(gets(m))
    {
        d=0;
        a=strlen(m);
        for(b=0;b<a;b++)
        {
            if(m[b]=='\"' && c%2==0)
            {
                n[d]='`';
                d++;
                n[d]='`';
                d++;
                c++;
                continue;
            }
            else if(m[b]=='\"' && c%2==1)
            {
                n[d]='\'';
                d++;
                n[d]='\'';
                d++;
                c++;
                continue;
            }
            n[d]=m[b];
            d++;
        }
        n[d]='\0';
        puts(n);
    }
    return 0;
}
