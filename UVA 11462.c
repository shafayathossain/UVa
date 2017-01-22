#include<stdio.h>

int main()
{
    long int a,b,c[150],d,e,f,g,h;
    while((scanf("%ld",&a))==1)
    {
        f=0;
        if(a==0)
            break;
        for(b=0;b<150;b++)
            c[b]=0;
        for(b=0;b<a;b++)
        {
            scanf("%ld",&d);
            f++;
            c[d]++;
        }
        for(b=0;b<150;b++)
        {
            if(c[b]>0)
            {
                d=c[b];
                for(e=1;e<=d;e++)
                {
                    f--;
                    printf("%ld",b);
                    if(f>=1)
                        printf(" ");
                }

            }
        }
        printf("\n");
    }
    return 0;
}

