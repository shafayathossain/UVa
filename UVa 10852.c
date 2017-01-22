#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c[1500],d=0,e,f,g,h,j,k,l;
    for(a=2;a<=10000;a++)
    {
        for(b=2;b<=sqrt(a);b++)
        {
            if(a%b==0)
                break;
        }
        if(b>sqrt(a))
        {
            c[d]=a;
            d++;
        }
    }
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&d);
        e=d/2;
        f=0;
        while(e>=c[f])
        {
            f++;
        }
        printf("%d\n",c[f]);
    }
    return 0;
}
