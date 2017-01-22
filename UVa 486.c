#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[1000],n[1000],o[1000],p[1000];
    while(gets(m))
    {
        a=strlen(m);
        c=0;
        d=0;
        for(b=a-1;b>=0;b--)
        {
            if(m[b]!=' ' && b>0)
            {
                n[c]=m[b];
                c++;
            }
            else
            {
                if(b==0)
                {
                    n[c]=m[b];
                    c++;
                }
                n[c]='\0';
                if(strcmp(n,"orez")==0)
                {
                    p[d]='0';
                    i=2;
                }
                else if(strcmp(n,"eno")==0)
                {
                    p[d]='1';
                    i=2;
                }
                else if(strcmp(n,"owt")==0)
                {
                    p[d]='2';
                    i=02;
                }
                else if(strcmp(n,"eerht")==0)
                {
                    i=02;
                    p[d]='3';
                }
                else if(strcmp(n,"ruof")==0)
                {
                    p[d]='4';
                    i=02;
                }
                else if(strcmp(n,"evif")==0)
                {
                    p[d]='5';
                    i=02;
                }
                else if(strcmp(n,"xis")==0)
                {
                    p[d]='6';
                    i=02;
                }
                else if(strcmp(n,"neves")==0)
                {
                    p[d]='7';
                    i=02;
                }
                else if(strcmp(n,"thgie")==0)
                {
                    p[d]='8';
                    i=02;
                }
                else if(strcmp(n,"enin")==0)
                {
                    p[d]='9';
                    i=02;
                }
                else if(strcmp(n,"net")==0)
                {
                    p[d]='0';
                    d=d+1;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"nevele")==0)
                {
                    p[d]='1';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"evlewt")==0)
                {
                    p[d]='2';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetriht")==0)
                {
                    p[d]='3';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetruof")==0)
                {
                    p[d]='4';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetfif")==0)
                {
                    p[d]='5';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetxis")==0)
                {
                    p[d]='6';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetneves")==0)
                {
                    p[d]='7';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neethgie")==0)
                {
                    p[d]='8';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"neetenin")==0)
                {
                    p[d]='9';
                    d++;
                    p[d]='1';
                    i=0;
                }
                else if(strcmp(n,"ytnewt")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='2';
                    i=0;
                }
                else if(strcmp(n,"ytriht")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='3';
                    i=0;
                }
                else if(strcmp(n,"ytrof")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='4';
                    i=0;
                }
                else if(strcmp(n,"ytfif")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='5';
                    i=0;
                }
                else if(strcmp(n,"ytxis")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='6';
                    i=0;
                }
                else if(strcmp(n,"ytneves")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1'|| p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='7';
                    i=0;
                }
                else if(strcmp(n,"ythgie")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='8';
                    i=0;
                }
                else if(strcmp(n,"ytenin")==0)
                {
                    if(i!=1)
                        d--;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    p[d]='9';
                    i=0;
                }
                else if(strcmp(n,"derdnuh")==0)
                {
                    if(i==2)
                        d++;
                    if(i==1)
                        d=d+2;
                    d-=2;
                    i=1;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                }
                else if(strcmp(n,"dnasuoht")==0)
                {
                    if(i==1)
                        d=d+3;
                    d=d-3;
                    i=1;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                }
                else if(strcmp(n,"noillim")==0)
                {
                    if(i==1)
                        d=d+6;
                    d=d-6;
                    i=1;
                    if(d<0)
                        d=0;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                    d++;
                    if(p[d]<'1' || p[d]>'9')
                    {
                        p[d]='0';
                    }
                }
                else if(strcmp(n,"evitagen")==0)
                {
                    p[d]='-';
                }
                if((p[d]>='0' && p[d]<='9') || p[d]=='-')
                    d++;
                c=0;
            }
        }
        p[d]='\0';
        k=0;
        l=1;
        for(c=0;c<=d-1;c++)
        {
            if((p[c]>='0' && p[c]<='9'))
            {
                k=k+(p[c]-'0')*l;
                p[c]='.';
                l=l*10;
            }
            if(p[c]=='-')
                k=k*-1;
        }
        printf("%lld\n",k);
    }
    return 0;
}
