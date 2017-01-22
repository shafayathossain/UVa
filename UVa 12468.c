#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        c=b-a;
        d=100-b;
        e=d+a;
        if(a>b)
        {
            c=a-b;
            d=100-a;
            e=d+b;
        }
        if(c<e)
            printf("%d\n",c);
        else
            printf("%d\n",e);
    }
    return 0;
}
