#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5)
    {
        if(a==0 && b==0 && c==0)
            break;
        h=0;
        f=0;
        while(f<=e)
        {
            g=a*f*f+b*f+c;
            if(g%d==0)
            {
                h++;
            }
            f++;
        }
        printf("%d\n",h);
    }
    return 0;
}
