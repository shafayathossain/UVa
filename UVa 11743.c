#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[10000];
    gets(m);
    l=strlen(m);
    j=0;
    i=1;
    for(k=l-1;k>=0;k--)
    {
        j=j+(m[k]-'0')*i;
        i=i*10;
    }
    for(l=0;l<j;l++)
    {
        gets(m);
        a=strlen(m);
        c=0;
        e=0;
        f=0;
        for(b=a-1; b>=0; b--)
        {
            if(m[b]>='0' && m[b]<='9')
            {
                if(c%2==1)
                {
                    d=(m[b]-'0')*2;
                    e=e+(d%10);
                    d=d/10;
                    e=e+(d%10);
                }
                else
                {
                    f=f+(m[b]-'0');
                }
                c++;
            }
        }
        e=e+f;
        if(e%10!=0)
        {
            printf("Invalid\n");
        }
        else
            printf("Valid\n");
    }
    return 0;
}
