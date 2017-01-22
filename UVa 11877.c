#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        b=a;
        a=a+a/2;
        a=a-b;
        printf("%d\n",a);
    }
    return 0;
}
