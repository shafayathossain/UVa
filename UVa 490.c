#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[101][101];
    for(a=0;a<=100;a++)
        for(b=0;b<=100;b++)
            m[a][b]=' ';
    a=0;
    b=0;
    while(gets(m[a]))
    {
        c=strlen(m[a]);
        if(b<c)
            b=c;
        a++;
    }
    for(c=0;c<b;c++)
    {
        for(d=a-1;d>=0;d--)
        {
            if(m[d][c]=='\0')
            {
                printf(" ");
                continue;
            }
            printf("%c",m[d][c]);
        }
        printf("\n");
    }
    return 0;
}
