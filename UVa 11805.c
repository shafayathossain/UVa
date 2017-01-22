#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d",&c,&d,&e);
        f=d+e;
        f=f%c;
        if(f==0)
            f=c;
        printf("Case %d: %d\n",b,f);
    }
    return 0;
}
