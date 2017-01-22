#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d",&c,&d,&e);
        if(c>20 || d>20 || e>20)
            printf("Case %d: bad\n",b);
        else
            printf("Case %d: good\n",b);
    }
    return 0;
}
