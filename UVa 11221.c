#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    char m[10001],n[10001],o[10001],p[10],q[10001],r[10001];
    gets(p);
    a=strlen(p);
    if(a==1)
        a=p[0]-'0';
    else
        a=(p[0]-'0')*10+p[1]-'0';
    for(b=1;b<=a;b++)
    {
        gets(m);
        c=strlen(m);
        e=0;
        for(d=0;d<c;d++)
        {
            if(m[d]>='a' && m[d]<='z')
            {
                n[e]=m[d];
                e++;
            }
        }
        n[e]='\0';
        d=sqrt(e);
        if(d*d!=e)
        {
            printf("Case #%d:\nNo magic :(\n",b);
        }
        else
        {
            g=0;
            for(f=0;f<e;)
            {
                o[g]=n[f];
                if(f==(e-1))
                {
                    g++;
                    break;
                }
                f=f+d;
                if(f>=e)
                {
                    f=f-e+1;
                }
                g++;
            }
            o[g]='\0';
            g=0;
            for(f=c-1;f>=0;f--)
            {
                if(m[f]>='a' && m[f]<='z')
                {
                    q[g]=m[f];
                    g++;
                }
            }
            q[g]='\0';
            e=strlen(q);
            g=0;
            for(f=0;f<e;)
            {
                r[g]=q[f];
                if(f==(e-1))
                {
                    g++;
                    break;
                }
                f=f+d;
                if(f>=e)
                {
                    f=f-e+1;
                }
                g++;
            }
            r[g]='\0';
            if((strcmp(n,o)==0) && (strcmp(n,q)==0) && (strcmp(n,r)==0) && (strcmp(o,q)==0) && (strcmp(o,r)==0) && (strcmp(q,r)==0))
            {
                printf("Case #%d:\n%d\n",b,d);
            }
            else
            {
                printf("Case #%d:\nNo magic :(\n",b);
            }
        }
    }
}
