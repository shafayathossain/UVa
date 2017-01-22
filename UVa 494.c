#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g;
    char m[1000],n[1000];
    while(gets(m))
    {
        c=0;
        d=0;
        a=strlen(m);
        for(b=0;b<a;b++)
        {
            if((m[b]>=65 && m[b]<=90) || (m[b]>=97 && m[b]<=122))
            {
                c=1;
            }
            else
            {
                if(c==1)
                {
                    d++;
                    c=0;
                }
            }
        }
        printf("%d\n",d);
    }
    return 0;
}
