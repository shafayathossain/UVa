#include<stdio.h>
#include<math.h>

int dec(int a)
{
    int b,c=0;
    while(a!=0)
    {
        if(a%2==1)
            c++;
        a=a/2;
    }
    return c;
}

int hex(int a)
{
    int b,c=0;
    while(a!=0)
    {
        b=a%10;
        c=c+dec(b);
        a=a/10;
    }
    return c;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        d=dec(c);
        e=hex(c);
        printf("%d %d\n",d,e);
    }
    return 0;
}
