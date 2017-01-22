#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[200][200];
    f=1;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                scanf(" %c",&m[c][d]);
            }
        }
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                e=0;
                if(m[c][d]=='*')
                {
                    continue;
                }
                if(m[c-1][d-1]=='*' && c-1>=0 && d-1>=0)
                {
                    e++;
                }
                if(m[c-1][d]=='*' && c-1>=0)
                {
                    e++;
                }
                if(m[c-1][d+1]=='*' && c-1>=0 && d+1!=b)
                {
                    e++;
                }
                if(m[c][d-1]=='*' && d-1>=0)
                {
                    e++;
                }
                if(m[c][d+1]=='*' && d+1!=b)
                {
                    e++;
                }
                if(m[c+1][d-1]=='*' && c+1!=a && d-1>=0)
                {
                    e++;
                }
                if(m[c+1][d]=='*' && c+1!=a)
                {
                    e++;
                }
                if(m[c+1][d+1]=='*' && c+1!=a && d+1!=b)
                {
                    e++;
                }
                m[c][d]=e+'0';
            }
        }
        if(f>1)
            printf("\n");
        printf("Field #%d:\n",f);
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                printf("%c",m[c][d]);
            }
            printf("\n");
        }
        f++;
    }
    return 0;
}
