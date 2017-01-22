#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d",&c,&d);
        e=c/3;
        f=d/3;
        printf("%d\n",e*f);
    }
    return 0;
}
