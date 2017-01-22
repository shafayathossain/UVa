#include<stdio.h>

int main()
{
    int a,b=1;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        a=a/2;
        printf("Case %d: %d\n",b,a);
        b++;
    }
    return 0;
}
