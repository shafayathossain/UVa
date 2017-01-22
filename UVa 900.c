#include<stdio.h>

int main()
{
    double a,b[100],d,f,g,h,i,j,k,l;
    int c,e;
    a=1;
    b[0]=1;
    for(c=1;c<50;c++)
    {
        b[c]=b[c-1]+a;
        a=b[c-1];
    }
    while(scanf("%d",&e)==1)
    {
        if(e==0)
            break;
        else
            printf("%.0lf\n",b[e-1]);
    }
    return 0;
}
