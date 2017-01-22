#include <stdio.h>
#include<string.h>
#include<math.h>

int main ()
{
    long long int a,b,c,d,e,f[10],g,h,i,j=0,k[2000],l,n,o=0,p;
    char m[100];
    while(scanf("%s",m))
    {
        if(strcmp(m,"0")==0)
            break;
        a=0;
        n=0;
        p=0;
        while(a!=1)
        {
            for(c=0;c<10;c++)
                f[c]=0;
            d=0;
            e=1;
            b=strlen(m);
            for(c=b-1;c>=0;c--)
            {
                d=d+(m[c]-'0')*e;
                e=e*10;
                f[m[c]-'0']++;
            }
            if(p==0)
                printf("Original number was %lld\n",d);
            p++;
            if(n==0)
                k[n]=d;
            g=0;
            e=1;
            i=0;
            j=1;
            for(c=0;c<10;c++)
            {
                if(f[c]>0)
                {
                    for(h=1;h<=f[c];h++)
                    {
                        g=g+c*e;
                        e=e*10;
                    }
                }
                if(f[9-c]>0)
                {
                    for(h=1;h<=f[9-c];h++)
                    {
                        i=i+(9-c)*j;
                        j=j*10;
                    }
                }
            }
            l=g-i;
            printf("%lld - %lld = %lld\n",g,i,l);
            for(c=0;c<=n;c++)
            {
                if(l==k[c])
                {
                    break;
                }
            }
            if(c<n+1)
            {
                a=1;
                printf("Chain length %lld\n\n",n+1);
                break;
            }
            n++;
            k[n]=l;
            d=log10(l);
            if(l<10)
                d=0;
            for(c=d;c>=0;c--)
            {
                m[c]=l%10+'0';
                l=l/10;
            }
            m[d+1]='\0';
        }
        p=0;
    }
    return 0;
}

