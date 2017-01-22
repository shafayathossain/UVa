#include<stdio.h>
#include<string.h>

int sti(char m[1000])
{
    int a=0,b=1,c,d;
    c=strlen(m);
    for(d=c-1;d>=0;d--)
    {
        a=a+(m[d]-'0')*b;
        b=b*10;
    }
    return a;
}


int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[1000],n[100],o[100],p[100],q[100],r[1000];
    freopen("input.txt","r",stdin);
    gets(m);
    a=sti(m);
    for(b=1;b<=a;b++)
    {
        gets(m);
        gets(r);
        c=strlen(m);
        e=0;
        f=0;
        for(d=0;d<c;d++)
        {
            if(m[d]=='<')
            {
                if(e==2)
                    o[f]='\0';
                else if(e==4)
                    q[f]='\0';
                e++;
                f=0;
                continue;
            }
            if(m[d]=='>')
            {
                if(e==1)
                    n[f]='\0';
                else if(e==3)
                    p[f]='\0';
                e++;
                f=0;
                continue;
            }
            printf("%c",m[d]);
            if(e==1)
            {
                n[f]=m[d];
                f++;
            }
            else if(e==2)
            {
                o[f]=m[d];
                f++;
            }
            else if(e==3)
            {
                p[f]=m[d];
                f++;
            }
            else if(e==4)
            {
                q[f]=m[d];
                f++;
            }
        }
        printf("\n");
            q[f]='\0';
        c=strlen(r);
        e=0;
        for(d=0;d<c;d++)
        {
            if(r[d]=='.' && r[d+1]=='.' && r[d+2]=='.' && e==0)
            {
                printf("%s%s%s%s",p,o,n,q);
                e++;
                d=d+2;
                continue;
            }
            printf("%c",r[d]);
        }
        printf("\n");
    }
    return 0;
}
