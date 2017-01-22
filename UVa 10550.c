#include <stdio.h>
#include<string.h>
#include<math.h>

int main ()
{
    int a,b,c,d,e,f,g,h,i;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        e=a-b;
        if(a<b)
            e=a+40-b;
        f=c-b;
        if(c<b)
            f=c+40-b;
        g=c-d;
        if(c<d)
            g=c+40-d;
        e=720+e*9+360+f*9+g*9;
        printf("%d\n",e);
    }
    return 0;
}

