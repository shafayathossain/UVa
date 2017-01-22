#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,h,i=0,j;
    while(scanf("%d",&a)==1)
    {
        if(i==0)
            printf("PERFECTION OUTPUT\n");
        i++;
        if(a==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else if(a==1)
        {
            printf("    1  DEFICIENT\n");
            continue;
        }
        c=0;
        for(b=2;b<=sqrt(a);b++)
        {
            if(a%b==0)
            {
                c=c+b;
                c=c+(a/b);
            }
        }
        c=c+1;
        if(c==a)
        {
            printf("%5d  PERFECT\n",a);
        }
        else if(c<a)
        {
            printf("%5d  DEFICIENT\n",a);
        }
        else
        {
            printf("%5d  ABUNDANT\n",a);
        }
    }
    return 0;
}
