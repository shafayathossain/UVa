#include<stdio.h>
#include<math.h>

int main()
{
    long int a,b=3,c,d[3502],e;
    d[0]=2;
    e=1;
    a=1;
    while(a!=3500)
    {
        for(c=2;c<=sqrt(b);c++)
        {
            if(b%c==0)
                break;
        }
        if(c>sqrt(b))
        {
            d[e]=b;
            a++;
            e++;
        }
        b+=2;
    }
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        for(b=0,c=1;c<=a;c++)
        {
            b=(b+d[a-c])%c;
        }
        printf("%d\n",b+1);
    }
    return 0;
}
