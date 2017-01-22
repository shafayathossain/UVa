#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c;
    scanf("%lld",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lld",&c);
        printf("%lld\n",c/2);
    }
    return 0;
}
