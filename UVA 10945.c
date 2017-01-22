#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[1000],n[1000];
    while(gets(m))
    {
        if(strcmp(m,"DONE")==0)
        {
            break;
        }
        else
        {
            a=strlen(m);
            c=0;
            for(b=0;b<a;b++)
            {
                if(m[b]>=97 && m[b]<=122)
                {
                    n[c]=m[b];
                    c++;
                }
                else if(m[b]>=65 && m[b]<=90)
                {
                    m[b]=m[b]+32;
                    n[c]=m[b];
                    c++;
                }
            }
            n[c]='\0';
            strcpy(m,n);
            a=strlen(m);
            c=a-1;
            for(b=0;b<a;b++)
            {
                n[c]=m[b];
                c--;
            }
            n[a]='\0';
            if(strcmp(m,n)==0)
            {
                printf("You won't be eaten!\n");
            }
            else
                printf("Uh oh..\n");
        }
    }
    return 0;
}
