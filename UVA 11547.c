#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        d=315*c+36962;
        f=(d%100)/10;
        if(f<0)
            f=f*(-1);
        printf("%d\n",f);
    }
    return 0;
}
