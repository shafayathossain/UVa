#include<stdio.h>
#include<string.h>

int powe(int a,int b)
{
    int c,d=1;
    for(c=1;c<=b;c++)
    {
        d=d*a;
    }
    return d;
}

int main()
{
    int a,b,c,d,e,f;
    char m[1000],n[50000];
    gets(m);
    m[0]='\0';
    d=0;
    e=0;
    while(gets(m))
    {
        if(strcmp(m,"___________")==0)
        {
            n[e]='\0';
            printf("%s",n);
            break;
        }
        a=strlen(m);
        c=0;
        d=0;
        for(b=a-2;b>=1;b--)
        {
            if(m[b]==' ')
            {
                c=c+0*powe(2,d);
                d++;
            }
            else if(m[b]=='o')
            {
                c=c+1*powe(2,d);
                d++;
            }
        }
        n[e]=c;
        e++;
    }
    return 0;
}
