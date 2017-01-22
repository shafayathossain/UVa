#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,g,h,i,j,k,l;
    double f;
    char m[500][200];
    while(scanf("%lf",&f)==1)
    {
        a=f;
        for(b=0;b<a;b++)
        {
            scanf("%s",m[b]);
        }
        c=ceil(f/16);
        c=c*16;
        d=0;
        e=1;
        for(b=1;b<=c;b++)
        {
            printf("%s: ",m[d]);
            if(b%4==1)
                printf("Happy\n");
            else if(b%4==2)
                printf("birthday\n");
            else if(b%4==3)
                printf("to\n");
            else if(b%4==0 && e==12)
                printf("Rujia\n");
            else if(b%4==0)
                printf("you\n");
            d++;
            e++;
            if(d==a)
                d=0;
            if(e==17)
                e=1;
        }
    }
    return 0;
}
