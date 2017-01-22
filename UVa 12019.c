#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%d %d",&c,&e);
        d=0;
        if(c>=2)
        {
            d=d+31;
        }
        if(c>=3)
        {
            d=d+28;
        }
        if(c>=4)
        {
            d=d+31;
        }
        if(c>=5)
        {
            d=d+30;
        }
        if(c>=6)
        {
            d=d+31;
        }
        if(c>=7)
        {
            d=d+30;
        }
        if(c>=8)
        {
            d=d+31;
        }
        if(c>=9)
        {
            d=d+31;
        }
        if(c>=10)
        {
            d=d+30;
        }
        if(c>=11)
        {
            d=d+31;
        }
        if(c>=12)
        {
            d=d+30;
        }
        d=d+e;
        d=d%7;
        if(d==1)
        {
            printf("Saturday\n");
        }
        else if(d==2)
        {
            printf("Sunday\n");
        }
        else if(d==3)
        {
            printf("Monday\n");
        }
        else if(d==4)
        {
            printf("Tuesday\n");
        }
        else if(d==5)
        {
            printf("Wednesday\n");
        }
        else if(d==6)
        {
            printf("Thursday\n");
        }
        else if(d==0)
        {
            printf("Friday\n");
        }
    }
    return 0;
}
