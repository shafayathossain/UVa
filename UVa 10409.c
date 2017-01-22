#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c;
    char m[10];
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        int side1=1,side2=2,side3=3,side4=4,side5=5,side6=6;
        for(b=1;b<=a;b++)
        {
            scanf("%s",m);
            if(strcmp(m,"east")==0)
            {
                c=side1;
                side1=side3;
                side3=side6;
                side6=side4;
                side4=c;
            }
            if(strcmp(m,"west")==0)
            {
                c=side1;
                side1=side4;
                side4=side6;
                side6=side3;
                side3=c;
            }
            if(strcmp(m,"north")==0)
            {
                c=side1;
                side1=side5;
                side5=side6;
                side6=side2;
                side2=c;
            }
            if(strcmp(m,"south")==0)
            {
                c=side1;
                side1=side2;
                side2=side6;
                side6=side5;
                side5=c;
            }
        }
        printf("%d\n",side1);
    }
    return 0;
}
