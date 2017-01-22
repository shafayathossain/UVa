#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,i,j,k,l[1000];
    l[0]=1;
    c=1;
    for(a=2;a<=1000;a++)
    {
        for(b=2;b<=sqrt(a);b++)
        {
            if(a%b==0)
                break;
        }
        if(b>sqrt(a))
        {
            l[c]=a;
            c++;
        }
    }
    while(scanf("%d %d",&a,&b)==2)
    {
        printf("%d %d:",a,b);
        for(d=0;d<c;d++)
        {
            if(l[d]>a)
            {
                break;
            }
        }
        k=d;
        if(d%2==0)
        {
            d=d/2;
            d=d-b;
            b=b*2;
        }
        else if(d%2==1)
        {
            d=d/2;
            d=d-b+1;
            b=b*2-1;
        }
        if(d<0)
        {
            d=0;
            b=k;
        }
        while(b!=0)
        {
            printf(" %d",l[d]);
            b--;
            d++;
        }
        printf("\n\n");
    }
    return 0;
}
