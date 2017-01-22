#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        while(a/10!=0)
        {
            b=log10(a);
            d=0;
            for(c=0;c<=b;c++)
            {
                d=d+(a%10);
                a=a/10;
            }
            a=d;
        }
        printf("%d\n",a);
    }
    return 0;
}
