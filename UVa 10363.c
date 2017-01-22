#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    char m[4][4],n[10];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        e=0;
        f=0;
        scanf("%s",m[0]);
        scanf("%s",m[1]);
        scanf("%s",m[2]);
        for(c=0;c<3;c++)
        {
            for(d=0;d<3;d++)
            {
                if(m[c][d]=='X')
                {
                    e++;
                }
                else if(m[c][d]=='O')
                {
                    f++;
                }
            }
        }
        g=0;
        h=0;
        for(c=0;c<3;c++)
        {
            if(c==0)
            {
                if(m[0][0]=='X' && m[1][0]=='X' && m[2][0]=='X')
                {
                    g=1;
                }
                else if(m[0][0]=='O' && m[1][0]=='O' && m[2][0]=='O')
                {
                    h=1;
                }
                if(m[0][0]=='X' && m[0][1]=='X' && m[0][2]=='X')
                {
                    g=1;
                }
                else if(m[0][0]=='O' && m[0][1]=='O' && m[0][2]=='O')
                {
                    h=1;
                }
                if(m[0][0]=='X' && m[1][1]=='X' && m[2][2]=='X')
                {
                    g=1;
                }
                else if(m[0][0]=='O' && m[1][1]=='O' && m[2][2]=='O')
                {
                    h=1;
                }
            }
            else if(c==1)
            {
                if(m[1][0]=='X' && m[1][1]=='X' && m[1][2]=='X')
                {
                    g=1;
                }
                else if(m[1][0]=='O' && m[1][1]=='O' && m[1][2]=='O')
                {
                    h=1;
                }
                if(m[0][1]=='X' && m[1][1]=='X' && m[2][1]=='X')
                {
                    g=1;
                }
                else if(m[0][1]=='O' && m[1][1]=='O' && m[2][1]=='O')
                {
                    h=1;
                }
            }
            else if(c==2)
            {
                if(m[0][2]=='X' && m[1][2]=='X' && m[2][2]=='X')
                {
                    g=1;
                }
                else if(m[0][2]=='O' && m[1][2]=='O' && m[2][2]=='O')
                {
                    h=1;
                }
                if(m[2][0]=='X' && m[2][1]=='X' && m[2][2]=='X')
                {
                    g=1;
                }
                else if(m[2][0]=='O' && m[2][1]=='O' && m[2][2]=='O')
                {
                    h=1;
                }
                if(m[2][0]=='X' && m[1][1]=='X' && m[0][2]=='X')
                {
                    g=1;
                }
                else if(m[0][2]=='O' && m[1][1]=='O' && m[2][0]=='O')
                {
                    h=1;
                }
            }
        }
        if(g==1 && h!=1)
        {
            if(e-1==f)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(g!=1 && h==1)
        {
            if(e==f)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(g==0 && h==0)
        {
            if(e==f)
                printf("yes\n");
            else if(e-1==f)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(g==1 && h==1)
            printf("no\n");
    }
    return 0;
}
