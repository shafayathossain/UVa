#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,e,f;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        else
        {
            b=sqrt(a);
            b=b*b;
            if(b==a)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
