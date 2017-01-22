#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        e=0;
        f=0;
        g=1;
        h=0;
        i=1;
        for(d=0;d<c-1;d++)
        {

            scanf("%d",&j);
            if((e+j)>0)
            {
                printf("%d ",j);
                if(i==1)
                {
                    g=d+1;
                    i=0;
                }
                e=e+j;
                h++;
            }
            else
            {
                i=1;
                e=0;
                h++;
            }
        }
        if(h!=0)
            printf("The nicest part of route %d is between stops %d and %d\n",b,g,h);
        else
        {
            printf("Route %d has no nice parts\n",b);
        }
    }
    return 0;
}

