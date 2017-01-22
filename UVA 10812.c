#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d",&c,&d);
        e=c+d;
        f=c-d;
        if(e%2==1 || f%2==1)
            printf("impossible\n");
        else if(f<0)
            printf("impossible\n");
        else
        {
            e=e/2;
            f=f/2;
            if(e>f)
                printf("%d %d\n",e,f);
            else
                printf("%d %d\n",f,e);
        }
    }
    return 0;
}
