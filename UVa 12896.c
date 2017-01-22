#include<stdio.h>

int main()
{
    int b,c,d,e,f[1000],g[1000],h,i,j,k,l;
    scanf("%d",&b);
    for(c=0;c<b;c++)
    {
        scanf("%d",&d);
        for(e=0;e<d;e++)
        {
            scanf("%d",&f[e]);
        }
        for(e=0;e<d;e++)
        {
            scanf("%d",&g[e]);
        }
        for(e=0;e<d;e++)
        {
            if(f[e]==0)
            {
                printf(" ");
            }
            else if(f[e]==1)
            {
                if(g[e]==1)
                    printf(".");
                else if(g[e]==2)
                    printf(",");
                else if(g[e]==3)
                    printf("\?");
                else if(g[e]==4)
                    printf("\"");
            }
            else if(f[e]==2)
            {
                if(g[e]==1)
                    printf("a");
                else if(g[e]==2)
                    printf("b");
                else if(g[e]==3)
                    printf("c");
            }
            else if(f[e]==3)
            {
                if(g[e]==1)
                    printf("d");
                else if(g[e]==2)
                    printf("e");
                else if(g[e]==3)
                    printf("f");
            }
            else if(f[e]==4)
            {
                if(g[e]==1)
                    printf("g");
                else if(g[e]==2)
                    printf("h");
                else if(g[e]==3)
                    printf("i");
            }
            else if(f[e]==5)
            {
                if(g[e]==1)
                    printf("j");
                else if(g[e]==2)
                    printf("k");
                else if(g[e]==3)
                    printf("l");
            }
            else if(f[e]==6)
            {
                if(g[e]==1)
                    printf("m");
                else if(g[e]==2)
                    printf("n");
                else if(g[e]==3)
                    printf("o");
            }
            else if(f[e]==7)
            {
                if(g[e]==1)
                    printf("p");
                else if(g[e]==2)
                    printf("q");
                else if(g[e]==3)
                    printf("r");
                else if(g[e]==4)
                    printf("s");
            }
            else if(f[e]==8)
            {
                if(g[e]==1)
                    printf("t");
                else if(g[e]==2)
                    printf("u");
                else if(g[e]==3)
                    printf("v");
            }
            else if(f[e]==9)
            {
                if(g[e]==1)
                    printf("w");
                else if(g[e]==2)
                    printf("x");
                else if(g[e]==3)
                    printf("y");
                else if(g[e]==4)
                    printf("z");
            }
        }
        printf("\n");
    }
    return 0;
}
