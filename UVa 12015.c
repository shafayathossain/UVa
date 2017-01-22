#include<stdio.h>
#include<string.h>

struct lucky
{
    char a[100];
    int m;
}go[15];
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=0;c<10;c++)
        {
            scanf("%s %d",&go[c].a,&go[c].m);
            if(c==0)
                d=go[c].m;
            if(d<go[c].m)
                d=go[c].m;
        }
        printf("Case #%d:\n",b);
        for(c=0;c<10;c++)
        {
            if(go[c].m==d)
            {
                for(e=c-1;e>=0;e--)
                {
                    if(strcmp(go[c].a,go[e].a)==0)
                        break;
                }
                if(e==-1)
                    puts(go[c].a);
            }
        }
    }
    return 0;
}
