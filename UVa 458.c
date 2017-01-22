#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char m[1000];
    while(gets(m))
    {
        for(a=0;a<strlen(m);a++)
        {
            b=m[a]-7;
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
