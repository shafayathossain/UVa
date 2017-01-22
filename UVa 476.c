#include<stdio.h>

int main()
{
    double a[20][10],c,d,f=1,g,h,i,j,k,l;
    int b=0,e;
    char m;
    while(scanf(" %c ",&m)==1)
    {
        if(m=='r')
        {
            scanf("%lf %lf %lf %lf",&a[b][0],&a[b][1],&a[b][2],&a[b][3]);
            b++;
        }
        else if(m=='*')
            break;
    }
    while(scanf("%lf %lf",&c,&d)==2)
    {
        if(c==9999.90000000 && d==9999.90000000)
            break;
        g=0;
        for(e=0;e<b;e++)
        {
            if((c>a[e][0] && c<a[e][2]) && (d<a[e][1] && d>a[e][3]))
            {
                printf("Point %.0lf is contained in figure %d\n",f,e+1);
                g=1;
            }
        }
        if(e==b && g==0)
            printf("Point %.0lf is not contained in any figure\n",f);
        f++;
    }
    return 0;
}
