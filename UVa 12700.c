#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    char m[200];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d ",&i);
        for(j=0;j<i;j++)
        {
            scanf("%c",&m[j]);
        }
        m[j]='\0';
        c=strlen(m);
        e=0;
        f=0;
        g=0;
        h=0;
        for(d=0;d<c;d++)
        {
            if(m[d]=='B')
            {
                e++;
            }
            else if(m[d]=='W')
            {
                f++;
            }
            else if(m[d]=='A')
            {
                g++;
            }
            else if(m[d]=='T')
            {
                h++;
            }
        }
        c=c-g;
        if(e==c && c!=0)
        {
            printf("Case %d: BANGLAWASH\n",b);
        }
        else if(f==c && c!=0)
        {
            printf("Case %d: WHITEWASH\n",b);
        }
        else if(e==f && c!=0)
        {
            printf("Case %d: DRAW %d %d\n",b,e,h);
        }
        else if(e!=c && f!=c && c!=0)
        {
            if(e>f)
            {
                printf("Case %d: BANGLADESH %d - %d\n",b,e,f);
            }
            else if(f>e)
            {
                printf("Case %d: WWW %d - %d\n",b,f,e);
            }
        }
        else if(c==0)
        {
            printf("Case %d: ABANDONED\n",b);
        }
    }
    return 0;
}
