#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    char m,n,o;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d%c%d%c%d",&c,&m,&d,&n,&e);
        scanf("%d%c%d%c%d",&f,&m,&g,&n,&h);
        if(f>c)
        {
            if(g==1 || g==3 || g==5 || g==7 || g==8 || g==10 || g==12)
            {
                c=c+31;
            }
            else if(g==2)
            {
                if(h%400==0)
                    c=c+29;
                else if(h%100!=0 && h%4==0)
                    c=c+29;
            }
            else
                c=c+30;
            g=g+1;
        }
        if(g>d)
        {
            d=d+12;
            h=h+1;
        }
        i=e-h;
        if(i<=130 && i>=0)
            printf("Case #%d: %d\n",b,i);
        else if(i>130)
            printf("Case #%d: Check birth date\n",b);
        else
            printf("Case #%d: Invalid birth date\n",b);
    }
    return 0;
}
