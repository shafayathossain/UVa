#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[10][100];
    scanf("%d",&a);
    for(b=0;b<5;b++)
    {
        for(c=0;c<4*a;c++)
        {
            scanf(" %c ",&m[b][c]);
        }
    }
    for(b=0;b<4*a;b++)
    {
        if(m[0][b]=='.' && m[0][b+1]=='*' && m[0][b+2]=='.')
        {
            printf("1");
            b=b+3;
            continue;
        }
        else if(m[3][b]=='*' && m[3][b+1]=='.' && m[3][b+2]=='.' && m[0][b]=='*' && m[0][b+1]=='*' && m[0][b+2]=='*')
        {
            printf("2");
            b=b+3;
            continue;
        }
        else
        {
            printf("3");
            b=b+3;
        }
    }
    printf("\n");
    return 0;
}
