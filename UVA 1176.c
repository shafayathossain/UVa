#include<stdio.h>

int main()
{
    int a,b,c,d=0,e,f,g,h;
    while(scanf("%d",&a)==1)
    {
        d++;
        b=1;
        c=0;
        if(a<0)
            break;
        while(b<a)
        {
            b=b*2;
            c++;
        }
        printf("Case %d: %d\n",d,c);
    }
    return 0;
}
