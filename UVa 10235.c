#include<stdio.h>
#include<string.h>
#include<math.h>

int sti(char m[1000])
{
    int a=0,b=1,c,d;
    c=strlen(m);
    for(d=c-1;d>=0;d--)
    {
        a=a+(m[d]-'0')*b;
        b=b*10;
    }
    return a;
}

int sti2(char m[1000])
{
    int a=0,b=1,c,d;
    c=strlen(m);
    for(d=0;d<c;d++)
    {
        a=a+(m[d]-'0')*b;
        b=b*10;
    }
    return a;
}

int main()
{
    int a,b,c,d,e,f,g,h,i;
    char m[100],n[100];
    while(gets(m))
    {
        a=sti(m);
        for(b=2;b<=sqrt(a);b++)
        {
            if(a%b==0)
            {
                break;
            }
        }
        if(b<=sqrt(a) || a==1)
        {
            printf("%d is not prime.\n",a);
        }
        else
        {
            c=sti2(m);
            for(b=2;b<=sqrt(c);b++)
            {
                if(c%b==0)
                {
                    break;
                }
            }
            if(b<=sqrt(c))
            {
                printf("%d is prime.\n",a);
            }
            else
            {
                if(a!=c)
                    printf("%d is emirp.\n",a);
                else
                    printf("%d is prime.\n",a);
            }
        }
    }
    return 0;
}
