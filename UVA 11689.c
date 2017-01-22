#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d",&c,&d,&e);
        f=c+d;
        i=0;
        g=e;
        while(f>=e)
        {
            g=f/e;
            h=f%e;
            f=g+h;
            i=i+g;
        }
        printf("%d\n",i);
    }
    return 0;
}
