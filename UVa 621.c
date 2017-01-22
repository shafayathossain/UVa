#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[1000];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",m);
        c=strlen(m);
        if(c==1)
        {
            if(m[0]=='1' || m[0]=='4')
            {
                printf("+\n");
            }
        }
        else if(c==2)
        {
            if(strcmp(m,"78")==0)
            {
                printf("+\n");
            }
            else if(strcmp(m,"35")==0)
            {
                printf("-\n");
            }
            else if(strcmp(m,"94")==0)
            {
                printf("*\n");
            }
        }
        else
        {
            if(m[c-1]=='5' && m[c-2]=='3')
            {
                printf("-\n");
            }
             else if(m[0]=='9' && m[c-1]=='4')
            {
                printf("*\n");
            }
            else if(m[0]=='1' && m[1]=='9' && m[2]=='0')
            {
                printf("?\n");
            }
        }
    }
    return 0;
}
