#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e=1,f,g,h,i,j,k,l;
    char m[20][20],n[20][20],o[20][20];
    while(scanf("%d",&a)==1)
    {
        for(b=0;b<a;b++)
        {
            scanf(" %s %s ",m[b],n[b]);
        }

        for(b=0;b<8;b++)
        {
            if(b==0 || b==4)
            {
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        if(m[c][d]!=n[c][d])
                        {
                            break;
                        }
                    }
                    if(d!=a)
                        break;
                }
                if(c==a)
                {
                    if(b==0)
                        printf("Pattern %d was preserved.\n",e);
                    else if(b==4)
                        printf("Pattern %d was reflected vertically.\n",e);
                    e++;
                    break;
                }
            }
            else if(b==1 || b==5)
            {
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        if(m[a-d-1][c]!=n[c][d])
                        {
                            break;
                        }
                    }
                    if(d!=a)
                        break;
                }
                if(c==a)
                {
                    if(b==1)
                        printf("Pattern %d was rotated 90 degrees.\n",e);
                    else
                        printf("Pattern %d was reflected vertically and rotated 90 degrees.\n",e);
                    e++;
                    break;
                }
            }
            else if(b==2 || b==6)
            {
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        if(m[a-c-1][a-d-1]!=n[c][d])
                        {
                            break;
                        }
                    }
                    if(d!=a)
                        break;
                }
                if(c==a)
                {
                    if(b==2)
                        printf("Pattern %d was rotated 180 degrees.\n",e);
                    else
                        printf("Pattern %d was reflected vertically and rotated 180 degrees.\n",e);
                    e++;
                    break;
                }
            }
            else if(b==3 || b==7)
            {
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        if(m[d][a-c-1]!=n[c][d])
                        {
                            break;
                        }
                    }
                    if(d!=a)
                        break;
                }
                if(c==a)
                {
                    if(b==3)
                        printf("Pattern %d was rotated 270 degrees.\n",e);
                    else
                        printf("Pattern %d was reflected vertically and rotated 270 degrees.\n",e);
                    e++;
                    break;
                }
            }
            if(b==3)
            {
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        o[c][d]=m[a-c-1][d];
                    }
                }
                for(c=0;c<a;c++)
                {
                    for(d=0;d<a;d++)
                    {
                        m[c][d]=o[c][d];
                    }
                }
            }
        }
        if(b==8)
        {
            printf("Pattern %d was improperly transformed.\n",e);
            e++;
        }
    }
    return 0;
}
