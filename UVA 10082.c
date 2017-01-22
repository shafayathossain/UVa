#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[1000]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./",n[1000];
    c=strlen(m);
    while(gets(n))
    {
        a=strlen(n);
        for(b=0;b<a;b++)
        {
            for(d=0;d<c;d++)
            {
                if((n[b]==m[d]) && n[b]!='Q' && n[b]!='`' && n[b]!='A' && n[b]!='Z')
                {
                    n[b]=m[d-1];
                    break;
                }
            }
        }
        puts(n);
    }
    return 0;
}
