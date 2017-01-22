#include<stdio.h>
#include<math.h>

int prime(int a)
{
    int b;
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    for(b=2;b<=sqrt(a);b++)
    {
        if(a%b==0)
            break;
    }
    if(b>sqrt(a))
        return 1;
    else
        return 0;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        d=0;
        for(b=1;b<=sqrt(a);b++)
        {
            if(a%b==0)
            {
                c=prime(b);
                if(c==1)
                    d++;
                e=a/b;
                if(e!=b)
                {
                    c=prime(e);
                    if(c==1)
                    d++;
                }
            }
        }
        printf("%d : %d\n",a,d);
    }
    return 0;
}
