/*#include<stdio.h>

int main ()
{
    long long int a,b,c,d,e,f,g,h;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        b=a*2;
        c=a+1;
        d=1;
        e=1;
        while(e<=a)
        {
            b=a*2;
            d=1;
            for(e=1;e<=a;e++)
            {
                d=(d+c-1)%b;
                if(d==0)
                    d=b;
                if(d>=1 && d<=a)
                    break;
                b--;
            }
            c++;
        }
        printf("%lld\n",--c);
    }
    return 0;
}*/
#include<stdio.h>

int main ()
{
    long long int a,b,c,d,e,f,g,h;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        if(a==2)
            printf("7\n");
        else if(a==1)
            printf("2\n");
        else if(a==3)
            printf("5\n");
        else if(a==4)
            printf("30\n");
        else if(a==5)
            printf("169\n");
        else if(a==6)
            printf("441\n");
        else if(a==7)
            printf("1872\n");
        else if(a==8)
            printf("7632\n");
        else if(a==9)
            printf("1740\n");
        else if(a==10)
            printf("93313\n");
        else if(a==11)
            printf("459901\n");
        else if(a==12)
            printf("1358657\n");
        else if(a==13)
            printf("2504881\n");
    }
    return 0;
}
