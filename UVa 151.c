#include<stdio.h>

int joseph(int c,int d)
{
    if(c==1)
        return 1;
    return ((joseph(c-1,d)+d-1)%c+1);
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        b=0;
        c=1;
        a=a-1;
        while(b!=12)
        {
            b=joseph(a,c);
            c++;
        }
        printf("%d\n",c-1);
    }
    return 0;
}
