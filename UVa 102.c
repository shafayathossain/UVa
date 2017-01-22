#include<stdio.h>

int main()
{
    int a[10],b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])==9)
    {
        h=1;
        b=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
        i=b;
        c=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
        if(i>c)
        {
            i=c;
            h=2;
        }
        d=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
        if(d<i)
        {
            i=d;
            h=3;
        }
        e=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
        if(e<i)
        {
            i=e;
            h=4;
        }
        f=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
        if(f<i)
        {
            i=f;
            h=5;
        }
        g=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];
        if(g<i)
        {
            i=g;
            h=6;
        }
        if(h==1)
            printf("BCG ");
        else if(h==2)
            printf("BGC ");
        else if(h==3)
            printf("CBG ");
        else if(h==4)
            printf("CGB ");
        else if(h==5)
            printf("GBC ");
        else
            printf("GCB ");
        printf("%d\n",i);
    }
    return 0;
}
