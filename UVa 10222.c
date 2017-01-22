#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[1000]="`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./",n[1000];
    c=strlen(m);
    while(gets(n))
    {
        a=strlen(n);
        for(b=0;b<a;b++)
        {
            if(n[b]>='A' && n[b]<='Z')
                n[b]=n[b]+32;
            for(d=0;d<c;d++)
            {
                if((n[b]==m[d]) && n[b]!='q' && n[b]!='`' && n[b]!='a' && n[b]!='z' && n[b]!='w' && n[b]!='s' && n[b]!='x')
                {
                    n[b]=m[d-2];
                    break;
                }
            }
        }
        puts(n);
    }
    return 0;
}
