#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    while(scanf("%d %d %d %d",&c,&d,&e,&f))
    {
        if(c==0 && d==0 && e==0 && f==0)
            break;
        c=c*60;
        c=c+d;
        e=e*60;
        e=e+f;
        g=e-c;
        if(g<0)
            g=1440+g;
        printf("%d\n",g);
    }
    return 0;
}
