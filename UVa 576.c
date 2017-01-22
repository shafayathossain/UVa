#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[10000],n[10000];
    while(gets(m))
    {
        if(strcmp(m,"e/o/i")==0)
            break;
        a=strlen(m);
        b=0;
        c=0;
        d=0;
        e=0;
        while(m[b]!='/')
        {
            if(m[b]=='a' || m[b]=='e' || m[b]=='i' || m[b]=='o' || m[b]=='u' || m[b]=='y')
            {
                if(m[b-1]!='a' && m[b-1]!='e' && m[b-1]!='i' && m[b-1]!='o' && m[b-1]!='u' && m[b-1]!='y')
                {
                    c++;
                }
            }
            b++;
        }
        if(c!=5)
        {
            printf("1\n");
            continue;
        }
        b+=1;
        while(m[b]!='/')
        {
            if(m[b]=='a' || m[b]=='e' || m[b]=='i' || m[b]=='o' || m[b]=='u' || m[b]=='y')
            {
                if(m[b-1]!='a' && m[b-1]!='e' && m[b-1]!='i' && m[b-1]!='o' && m[b-1]!='u' && m[b-1]!='y')
                {
                    d++;
                }
            }
            b++;
        }
        if(d!=7)
        {
            printf("2\n");
            continue;
        }
        b+=1;
        while(b<a)
        {
            if(m[b]=='a' || m[b]=='e' || m[b]=='i' || m[b]=='o' || m[b]=='u' || m[b]=='y')
            {
                if(m[b-1]!='a' && m[b-1]!='e' && m[b-1]!='i' && m[b-1]!='o' && m[b-1]!='u' && m[b-1]!='y')
                {
                    e++;
                }
            }
            b++;
        }
        if(e!=5)
        {
            printf("3\n");
            continue;
        }
        printf("Y\n");
    }
    return 0;
}
