#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d=0,e,f,g;
    char m[100];
    scanf("%d ",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",m);
        if(strcmp(m,"donate")==0)
        {
            scanf("%d ",&c);
            d=d+c;
        }
        else
            printf("%d\n",d);
    }
    return 0;
}
