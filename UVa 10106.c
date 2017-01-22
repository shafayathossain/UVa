#include<stdio.h>
#include<math.h>
#include<string.h>

char p[10000];

void addition(char m[10000])
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    a=strlen(m);
    b=strlen(p);
    d=a;
    if(b>a)
    {
        d=b;
    }
    h=0;
    for(c=0;c<d;c++)
    {
        e=m[c]-'0';
        if(c>=a)
            e=0;
        f=p[c]-'0';
        if(c>=b)
            f=0;
        g=e+f+h;
        h=g/10;
        g=g%10;
        p[c]=g+'0';
    }
    if(h>0)
    {
        p[c]=h+'0';
        c++;
    }
    p[c]='\0';
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[10000],n[10000],o[10000];
    while(gets(m))
    {
        gets(n);
        p[0]='0';
        p[1]='\0';
        a=strlen(m);
        b=strlen(n);
        e=b-1;
        for(c=0;c<b;c++)
        {
            f=0;
            for(d=0;d<=e;d++)
            {
                o[f]='0';
                f++;
            }
            e--;
            f--;
            j=0;
            for(d=a-1;d>=0;d--)
            {
                g=n[c]-'0';
                h=m[d]-'0';
                i=g*h+j;
                j=i/10;
                i=i%10;
                o[f]=i+'0';
                f++;
            }
            if(j>0)
            {
                o[f]=j+'0';
                f++;
            }
            o[f]='\0';
            addition(o);
        }
        a=strlen(p);
        c=0;
        for(b=a-1;b>=0;b--)
        {
            if(p[b]!='0' && c==0)
                c=1;
            if(c==0)
                continue;
            printf("%c",p[b]);
        }
        if(c==0)
            printf("0");
        printf("\n");
    }
    return 0;
}
