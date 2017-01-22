#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[100];
    while(gets(m))
    {
        a=strlen(m);
        c=0;
        for(b=0; b<a; b++)
        {
            if(m[b]==66 || m[b]==70 || m[b]==80 || m[b]==86)
            {
                if(c!=1)
                {
                    printf("1");
                    c=1;
                }
            }
            else if(m[b]==67 || m[b]==71 || m[b]==74 || m[b]==75 || m[b]==81 || m[b]==83 || m[b]==88 || m[b]==90)
            {
                if(c!=2)
                {
                    printf("2");
                    c=2;
                }
            }
            else if(m[b]==68 || m[b]==84)
            {
                if(c!=3)
                {
                    printf("3");
                    c=3;
                }
            }
            else if(m[b]=='L')
            {
                if(c!=4)
                {
                    printf("4");
                    c=4;
                }
            }
            else if(m[b]=='M' || m[b]=='N')
            {
                if(c!=5)
                {
                    printf("5");
                    c=5;
                }
            }
            else if(m[b]=='R')
            {
                if(c!=6)
                {
                    printf("6");
                    c=6;
                }
            }
            else
            	c=0;
        }
        printf("\n");
    }
    return 0;
}
