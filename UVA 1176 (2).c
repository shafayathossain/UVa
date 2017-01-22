#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    while(scanf("%d",&a)==1)
    {
        b=1;
        while(b<=a)
        {
            b=b*2;
        }
        c=b-1;
        d=b-a;;
        for(e=1;e<d;e++)
        {
            c=c-2;
        }
        printf("%d\n",c);
    }
}
