#include<stdio.h>

int main()
{
    long int a,b,c,d,e,f,g,h;
    while(scanf("%ld",&a)!=EOF)
    {
        d=1;
        b=a*2;
        for(c=b;c>=6;c-=4)
        {
            d=d+c;
        }
        printf("%ld\n",d+d-2+d-4);
    }
    return 0;
}
