#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        h=0;
        scanf("%d",&c);
        for(d=1;d<=c;d++)
        {
            scanf("%d %d %d",&e,&f,&g);
            h=h+e*g;
        }
        printf("%d\n",h);
    }
    return 0;
}
