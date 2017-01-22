#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    while(scanf("%2d %2d %2d %2d",&a,&b,&c,&d)==4)
    {
        d=d+a*60*60*100+b*60*100+c*100;
        e=d*125/108;
        printf("%.7d\n",e);
    }
    return 0;
}
