#include<stdio.h>
#include<math.h>

int main()
{
    int a,b=1,c,d,e,f,g,h,i,j,k,l;
    double m,n,o,p,q,r,s,t,u,v,w;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        scanf("%lf %lf %lf",&m,&n,&o);
        if(a==1)
        {
            q=(n-m)/o;
            p=(m*o)+(0.5*q*o*o);
        }
        else if(a==2)
        {
            q=(n-m)/o;
            p=(m*q)+(0.5*o*q*q);
        }
        else if(a==3)
        {
            p=(m*m)+2.0*n*o;
            p=sqrt(p);
            q=(p-m)/n;
        }
        else if(a==4)
        {
            p=(m*m)-2.0*n*o;
            p=sqrt(p);
            q=(m-p)/n;
        }
        printf("Case %d: %.3lf %.3lf\n",b,p,q);
        b++;
    }
    return 0;
}
