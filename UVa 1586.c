#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    double k;
    char m[10000],n[10000];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",m);
        c=0;
        e=0;
        j=0;
        k=0.0;
        while(m[c]=='C' || m[c]=='N' || m[c]=='H' || m[c]=='O')
        {
            c++;
            e=c;
            d=0;
            h=1;
            if(m[c]=='C' || m[c]=='N' || m[c]=='H' || m[c]=='O' || m[c]=='\0')
            {
                if(m[e-1]=='C')
                {
                    k=k+h*12.01;
                }
                else if(m[e-1]=='O')
                {
                    k=k+h*16.00;
                }
                else if(m[e-1]=='H')
                {
                    k=k+h*1.008;
                }
                else if(m[e-1]=='N')
                {
                    k=k+h*14.01;
                }
                continue;
            }
            while(m[c]>='0' && m[c]<='9')
            {
                d++;
                c++;
            }
            g=1;
            h=0;
            for(f=e+d-1;f>e-1;f--)
            {
                h=h+(m[f]-'0')*g;
                g=g*10;
            }
            if(m[e-1]=='C')
            {
                k=k+h*12.01;
            }
            else if(m[e-1]=='O')
            {
                k=k+h*16.00;
            }
            else if(m[e-1]=='H')
            {
                k=k+h*1.008;
            }
            else if(m[e-1]=='N')
            {
                k=k+h*14.01;
            }
        }
        printf("%.3lf\n",k);
    }
    return 0;
}
