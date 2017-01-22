#include <stdio.h>
#include<string.h>

int main ()
{
    int a,b,c,d,e,f,g=0,h,i,j;
    char m[15][15],n,o[100][100];
    while(scanf("%d",&a)==1)
    {
        f=1;
        if(a==0)
            break;
        else
            scanf("%d",&b);
        for(c=0;c<a;c++)
            scanf("%s",m[c]);
        if(g>0)
            printf("\n");
        printf("puzzle #%d:\n",g+1);
        printf("Across\n");
        d=0;
        e=1;
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                if(f==1 && m[c][d]!='*')
                {
                    printf("%3d.",e);
                }
                if(m[c][d]!='*')
                {
                    printf("%c",m[c][d]);
                    if(((c-1)<0 || (d-1)<0 || m[c-1][d]=='*' || m[c][d-1]=='*') && m[c][d]!='*')
                        e++;
                    f=0;
                    if((d+1)<b && m[c][d+1]=='*')
                    {
                        f=1;
                        printf("\n");
                    }
                    if((d+1)==b)
                    {
                        f=1;
                        printf("\n");
                        break;
                    }
                }
            }
        }
        printf("Down\n");
        f=1;
        e=0;
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                h=c;
                if(((c-1)<0 || (d-1)<0 || m[c-1][d]=='*' || m[c][d-1]=='*') && m[c][d]!='*')
                {
                    e++;
                }
                if(c>0 && m[c][d]!='*' && m[c-1][d]=='*')
                {
                    printf("%3d.",e);
                    while(m[h][d]!='*' && h<a)
                    {
                        printf("%c",m[h][d]);
                        h++;
                    }
                    printf("\n");
                }
                else if(c==0 && m[c][d]!='*')
                {
                    printf("%3d.",e);
                    while(m[h][d]!='*' && h<a)
                    {
                        printf("%c",m[h][d]);
                        h++;
                    }
                    printf("\n");
                }
            }
        }
        g++;
    }
    return 0;
}

