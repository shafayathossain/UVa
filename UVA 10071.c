#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=2*a*b;
        printf("%d\n",c);
    }
    return 0;
}
