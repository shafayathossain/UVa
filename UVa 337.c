#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k=1;
    char m[100],n[20][20];
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        e=1;
        f=1;
        for(b=0; b<=11; b++)
        {
            for(d=0; d<=11; d++)
            {
                if(b==0 || b==11)
                {
                    if(d==0 || d==11)
                        n[b][d]='+';
                    else
                        n[b][d]='-';
                }
                else if(d==0 || d==11)
                {
                    n[b][d]='|';
                }
                else
                    n[b][d]=' ';
            }
        }
        for(b=1; b<=a+1; b++)
        {
            gets(m);
            c=strlen(m);
            i=3;
            for(d=0; d<c; d++)
            {
                if((m[d]=='^' && m[d-1]=='^') || m[d]!='^')
                {
                    if(i==1 || i==2)
                    {
                        for(j=9; j>=f; j--)
                        {
                            n[e][j+1]=n[e][j];
                        }
                        if(i==2)
                        {
                            n[e][f]='^';
                            i=1;
                            if(f+1<=10)
                                f++;
                            m[d]=' ';
                        }
                        else
                        {
                            n[e][f]=m[d];
                            if(f+1<=10)
                                f++;
                        }
                    }
                    else
                    {
                        if(i==4)
                        {
                            n[e][f]='^';
                            i=3;
                            if(f+1<=10)
                                f++;
                            m[d]=' ';
                        }
                        else
                        {
                            n[e][f]=m[d];
                            if(f+1<=10)
                                f++;
                        }
                    }
                }
                else if(m[d]=='^')
                {
                    d++;
                    if(m[d]=='c')
                    {
                        for(g=1; g<=10; g++)
                            for(h=1; h<=10; h++)
                                n[g][h]=' ';
                        m[d]=' ';
                    }
                    else if(m[d]=='b')
                    {
                        f=1;
                        m[d]=' ';
                    }
                    else if(m[d]=='d')
                    {
                        if(e+1<=10)
                            e++;
                        m[d]=' ';
                    }
                    else if(m[d]=='e')
                    {
                        n[e][f]=' ';
                        if(f+1<=10)
                            n[e][f+1]=' ';
                        m[d]=' ';
                    }
                    else if(m[d]=='h')
                    {
                        e=1;
                        f=1;
                        m[d]=' ';
                    }
                    else if(m[d]=='i')
                    {
                        i=1;
                        m[d]=' ';
                    }
                    else if(m[d]=='l')
                    {
                        if(f-1>=1)
                            f=f-1;
                        m[d]=' ';
                    }
                    else if(m[d]=='o')
                    {
                        i=3;
                        m[d]=' ';
                    }
                    else if(m[d]=='r')
                    {
                        if(f+1<=10)
                            f++;
                        m[d]=' ';
                    }
                    else if(m[d]=='u')
                    {
                        if(e-1>=1)
                            e--;
                        m[d]=' ';
                    }
                    else if(m[d]=='^')
                    {
                        if(i==1)
                            i=2;
                        else if(i==3)
                            i=4;
                        d--;
                    }
                    else if(m[d]>='0' && m[d]<='9')
                    {
                        e=m[d]-'0';
                        e++;
                        f=m[d+1]-'0';
                        f++;
                        d++;
                    }
                }
            }
        }
        printf("Case %d\n",k);
        k++;
        for(b=0; b<=11; b++)
        {
            for(d=0; d<=11; d++)
            {
                printf("%c",n[b][d]);
            }
            printf("\n");
        }
    }
}
