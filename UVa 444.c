#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l=1;
    char m[1000],n[1000];
    while(gets(m))
    {
        a=strlen(m);
        if(m[0]>='0' && m[0]<='9')
        {
            c=0;
            d=1;
            e=0;
            for(b=a-1;b>=0;b--)
            {
                c=0;
                if(m[b]>='2' && m[b]<='9' || m[b]=='0')
                {
                    c=c+(m[b-1]-'0');
                    c=c+(m[b]-'0')*10;
                    b--;
                }
                else if(m[b]=='1')
                {
                    c=c+(m[b-2]-'0');
                    c=c+(m[b-1]-'0')*10;
                    c=c+(m[b]-'0')*100;
                    b--;
                    b--;
                }
                if(c>=32)
                {
                    n[e]=c;
                    e++;
                }
            }
            n[e]='\0';
        }
        else
        {
            e=0;
            f=0;
            for(b=a-1;b>=0;b--)
            {
                c=m[b];
                d=log10(c);
                while(c!=0)
                {
                    n[e]=(c%10)+'0';
                    e++;
                    c=c/10;
                }
            }
            n[e]='\0';
        }
        puts(n);
        l++;
    }
    return 0;
}
