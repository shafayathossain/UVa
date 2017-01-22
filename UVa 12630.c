#include<stdio.h>

int main()
{
    long int a,b,c,d,e,f,g,h;
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
            break;
        b=(a-1)*a*(a+1)*(a+2)/24;
        printf("%ld\n",b);
    }
    return 0;
}
