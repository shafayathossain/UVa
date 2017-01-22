#include<stdio.h>
#include<string.h>

int multi(char m[100],char n[100])
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char o[100],p[100],q;
    a=strlen(n);
    b=strlen(m);
    for(c=0;c<a;c++)
    {
        h=0;
        e=n[c]-'0';
        for(d=0;d<b;d++)
        {
            f=m[d]-'0';
            g=e*f;
            g=g+h;
            h=g/10;
            g=g%10;
            o[d]=g+'0';
            o[d+1]=h+'0';
        }
        add(o);
    }
}

int add(char m[100])
{
    int a,b,c,d,e,f=0,g,h;
    char n[100],o[100];
    for(a=0;a<100;a++)
    {
        n[a]='0';
    }
    a=strlen(m);
    for(b=0;b<a;b++)
    {
        c=m[b]-'0';
        d=n[b]-'0';
        e=c+d+f;
        f=e/10;
        g=e%10;
        o[b]=g+'0';
        o[b+1]=f+'0';
    }
    if(f==0)
        o[b]='\0';
    strcpy(n,o);
    h=strlen(o);
    n[h]='0';
}
int main()
{
    int a,b,c,d,e,f,g,h,i;
    char m[100],n[100],o[100],p[100],q[100];
    scanf("%s %s",m,n);
    multi(m,n);
}
