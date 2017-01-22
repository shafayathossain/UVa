#include<stdio.h>

int main()
{
    int a=0,b,c,d,e,f,g;
    char m;
    while(scanf("%c",&m)!=EOF)
    {
        if(m>='0' && m<='9')
        {
            a=a+m-'0';
            continue;
        }
        else if(m=='\n')
            printf("\n");
        if(m=='!')
        {
            printf("\n");
            continue;
        }
        for(b=1;b<=a;b++)
        {
            if(m=='b')
                printf(" ");
            else
                printf("%c",m);
        }
        a=0;
    }
    return 0;
}
