#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b[70],c,d=0,e,f,g,h;
    for(c=1;c<=60;c++)
    {
        b[d]=c*c*c;
        d++;
    }
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
        {
            break;
        }
        for(c=1;c<59;c++)
        {
            if(a>=b[c-1])
            {
                d=b[c];
                e=c;
            }
            else
                break;
        }
        for(c=e;c<=59;c++)
        {
            for(f=c-1;f>=0;f--)
            {
                if((b[c]-b[f])==a)
                {
                    printf("%lld %lld\n",c+1,f+1);
                    break;
                }
            }
            if(f>=0)
                break;
        }
        if(c>59)
        {
            printf("No solution\n");
        }
    }
    return 0;
}
