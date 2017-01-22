#include<stdio.h>
#include<math.h>

int main()
{
    long long int a=1,b=1,c,d,e,f,g,h;
    while(a<1501)
    {
        c=b;
        while(c!=1)
        {
            if(c%2==0)
            {
                c=c/2;
            }
            else if(c%3==0)
            {
                c=c/3;
            }
            else if(c%5==0)
            {
                c=c/5;
            }
            else if(c%2!=0 && c%3!=0 && c%5!=0)
            {
                break;
            }
        }
        if(c==1)
        {
            printf("%lld.%lld  ",a,b);
            a++;
        }
        b++;
    }
    return 0;
}
