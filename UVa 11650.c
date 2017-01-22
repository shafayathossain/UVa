#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    double i,j,k,l;
    char m[10];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",&m);
        c=(m[0]-'0')*10+(m[1]-'0');
        d=(m[3]-'0')*10+(m[4]-'0');
        e=c;
        f=d;
        if(c==12)
            c=0;
        i=c*30.0+(30.0*d)/60.0;
        j=d*6;
        if(i==0.0)
            i=360.0;
        if(j==0.0)
            j=360.0;
        k=360-i;
        l=360-j;
        g=k/30;
        h=l/6;
        if(g==0)
            g=12;
        printf("%.2d:%.2d\n",g,h);
    }
    return 0;
}
