#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[10000],n[10000],o,p[100][100];
    scanf("%d %d",&a,&b);
    while(scanf("%d %d %c",&c,&d,&o)!=EOF)
    {
        if(o=='N')
            l=0;
        else if(o=='E')
            l=1;
        else if(o=='S')
            l=2;
        else if(o=='W')
            l=3;
        scanf("%s",m);
        e=strlen(m);
        for(f=0;f<e;f++)
        {
            if(m[f]=='L')
            {
                l--;
                if(l==-1)
                    l=3;
            }
            else if(m[f]=='R')
            {
                l++;
                l=l%4;
            }
            else if(m[f]=='F')
            {
                if(l==0)
                    d++;
                else if(l==1)
                    c++;
                else if(l==2)
                    d--;
                else if(l==3)
                    c--;
            }
            if(d>b)
            {
                if(p[c][d-1]!='x')
                {
                    d--;
                    break;
                }
                else
                {
                    d--;
                    continue;
                }
            }
            else if(d<0)
            {

                if(p[c][d+1]!='x')
                {
                    d++;
                    break;
                }
                else
                {
                    d++;
                    continue;
                }
            }
            else if(c>a)
            {
                if(p[c-1][d]!='x')
                {
                    c--;
                    break;
                }
                else
                {
                    c--;
                    continue;
                }
            }
            else if(c<0)
            {
                if(p[c+1][d]!='x')
                {
                    c++;
                    break;
                }
                else
                {
                    c++;
                    continue;
                }
            }
        }
        printf("%d %d",c,d);
        if(l==0)
        {
            printf(" N");
        }
        else if(l==1)
            printf(" E");
        else if(l==2)
            printf(" S");
        else
            printf(" W");
        if(f!=e)
        {
            p[c][d]='x';
            printf(" LOST");
        }
        printf("\n");
    }
    return 0;
}
