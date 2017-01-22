#include<stdio.h>

struct date
{
    int year,month,date;
    char name[1000];
};

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    struct date m[100];
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf(" %s ",m[b].name);
        scanf("%d",&m[b].date);
        scanf("%d",&m[b].month);
        scanf("%d",&m[b].year);
    }
    c=m[0].date;
    d=m[0].month;
    e=m[0].year;
    f=m[0].date;
    g=m[0].month;
    h=m[0].year;
    i=0;
    j=0;
    for(b=1;b<a;b++)
    {
        if(e<=m[b].year)
        {
            if(e==m[b].year)
            {
                if(d<=m[b].month)
                {
                    if(d==m[b].month)
                    {
                        if(c<m[b].date)
                        {
                            c=m[b].date;
                            d=m[b].month;
                            e=m[b].year;
                            i=b;
                        }
                    }
                    else if(d<m[b].month)
                    {
                        c=m[b].date;
                        d=m[b].month;
                        e=m[b].year;
                        i=b;
                    }
                }
            }
            else if(d<m[b].year)
            {
                c=m[b].date;
                d=m[b].month;
                e=m[b].year;
                i=b;
            }
        }
        if(h>=m[b].year)
        {
            if(h==m[b].year)
            {
                if(g>=m[b].month)
                {
                    if(g==m[b].month)
                    {
                        if(f>m[b].date)
                        {
                            f=m[b].date;
                            g=m[b].month;
                            h=m[b].year;
                            j=b;
                        }
                    }
                    else if(g>m[b].month)
                    {
                        f=m[b].date;
                        g=m[b].month;
                        h=m[b].year;
                        j=b;
                    }
                }
            }
            else if(h>m[b].year)
            {
                f=m[b].date;
                g=m[b].month;
                h=m[b].year;
                j=b;
            }
        }
    }
    printf("%s\n%s\n",m[i].name,m[j].name);
    return 0;
}
