#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    char m;
    while(scanf("%lf %c %lf",&a,&m,&b)==3)
    {
        if(a==0 && b==0)
            break;
        c=30*a-5.5*b;
        if(c<0)
            c=c*-1;
        if(c>180)
            c=360-c;
        printf("%.3lf\n",c);
    }
    return 0;
}
