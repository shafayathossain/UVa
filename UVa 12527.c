#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d[11],e,f,g,h,i,j,k,l;
    while(scanf("%d %d",&a,&b)==2)
    {
        h=0;
        for(e=a;e<=b;e++)
        {
            for(c=0;c<=10;c++)
            d[c]=0;
            f=e;
            while(f!=0)
            {
                g=f%10;
                d[g]++;
                if(d[g]>1)
                    break;
                f=f/10;
            }
            if(f==0)
                h++;
        }
        printf("%d\n",h);
    }
    return 0;
}
