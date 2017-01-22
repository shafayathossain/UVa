#include<stdio.h>

int main()
{
    long long int a,b[100],c,d,e,f;
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
            break;
        if(a==0)
        {
            printf("0\n");
            continue;
        }
        c=0;
        while(a!=0)
        {
            b[c]=a%3;
            c++;
            a=a/3;
        }
        for(a=c-1;a>=0;a--)
        {
            printf("%lld",b[a]);
        }
        printf("\n");
    }
    return 0;
}
