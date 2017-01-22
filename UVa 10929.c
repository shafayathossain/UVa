#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e;
    char m[1100];
    while(scanf("%s",m))
    {
        if(strcmp(m,"0")==0)
            break;
        c=0;
        a=strlen(m);
        for(b=0; b<a; b++)
        {
            if(b%2==0)
                d=1;
            else
                d=-1;
            c=c+(m[b]-'0')*d;
        }
        if(c%11==0)
        {
            printf("%s is a multiple of 11.\n",m);
        }
        else
            printf("%s is not a multiple of 11.\n",m);
    }
    return 0;
}
