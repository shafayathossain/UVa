#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    char m[1000];
    int n[200];
    while(gets(m))
    {
        d=0;
        for(b=0;b<=199;b++)
            n[b]=0;
        a=strlen(m);
        for(b=0;b<a;b++)
        {
            if((m[b]>='A' && m[b]<='Z') || (m[b]>='a' && m[b]<='z'))
            {
                c=m[b];
                n[c]++;
            }
        }
        for(b=0;b<200;b++)
        {
            if(d<=n[b])
            {
                d=n[b];
            }
        }
        for(b=0;b<=199;b++)
        {
            if(n[b]==d)
                printf("%c",b);
        }
        printf(" %d\n",d);
    }
    return 0;
}
