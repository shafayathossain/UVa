#include<stdio.h>
#include<string.h>
#include<math.h>

char m[90000],n[90000];
int main()
{
    long int a,b,c,d,e,f,g,h,i,j,k,l;
    char o;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;
        b--;
        c--;
        d=log10(a);
        l=d;
        while(a!=0)
        {
            m[d]=(a%10)+'0';
            a=a/10;
            d--;
        }
        m[l+1]='\0';
        for(e=1;e<=b;e++)
        {
            g=0;
            h=0;
            for(f=0;f<=c+10;f++)
            {
                if(g==0)
                {
                    o=m[f];
                    g++;
                }
                else if(g!=0 && m[f-1]==m[f])
                {
                    g++;
                }
                else if(g!=0 && m[f-1]!=m[f])
                {
                    n[h]=g+'0';
                    h++;
                    n[h]=o;
                    h++;
                    g=0;
                    f--;
                }
                if(m[f]=='\0')
                    break;
            }
            n[h]='\0';
            for(f=0;f<h;f++)
            {
                m[f]=n[f];
            }
            m[f]='\0';
            d=f;
        }
        printf("%c\n",m[c]);
    }
    return 0;
}
