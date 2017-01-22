#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    double m,n,o,p,q;
    while(scanf("%lf %lf",&m,&n)==2)
    {
        if(m==0 && n==0)
        {
            break;
        }
        a=m;
        b=n;
        if(m==1)
        {
            printf("%.0lf knights may be placed on a %.0lf row %.0lf column board.\n",n,m,n);
        }
        else if(n==1)
        {
            printf("%.0lf knights may be placed on a %.0lf row %.0lf column board.\n",m,m,n);
        }
        else if(m==2 || n==2)
        {
            c=m+n;
            if(c%2==1)
            {
                c--;
            }
            if(a%4==0 || b%4==0)
            {
                c=c-2;
            }
            printf("%d knights may be placed on a %.0lf row %.0lf column board.\n",c,m,n);
        }
        else
        {
            if(m>n)
            {
                o=n/2.0;
                p=o*m;
                c=o*m;
            }
            else
            {
                o=m/2.0;
                p=o*n;
                c=o*n;
            }
            if(c==p)
            {
                printf("%.0lf knights may be placed on a %.0lf row %.0lf column board.\n",p,m,n);
            }
            else
            {
                printf("%d knights may be placed on a %.0lf row %.0lf column board.\n",c+1,m,n);
            }
        }
    }
    return 0;
}
