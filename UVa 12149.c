#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        c=a*(a+1)*(2*a+1);
        c=c/6;
        printf("%d\n",c);
    }
    return 0;
}
