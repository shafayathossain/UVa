#include<stdio.h>
#include<math.h>

int main()
{
    long int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    while(scanf("%ld %ld %ld %ld",&a,&b,&c,&d)==4)
    {
        i=-1;
        for(e=1;e<=c;e++)
        {
            j=0;
            scanf("%ld",&f);
            k=0;
            for(g=1;g<=d;g++)
            {
                scanf("%ld",&h);
                if(h>=a)
                {
                    j=f*a;
                    k=1;
                }
                if(k==0)
                    j=b+1;
            }
            if(i==-1 && j<=b)
            {
                i=j;
            }
            else
            {
                if(j<i && j<=b)
                {
                    i=j;
                }
            }
        }
        if(i>b || i==-1)
            printf("stay home\n");
        else
            printf("%ld\n",i);
    }
    return 0;
}
