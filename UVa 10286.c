#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%lf",&a)!=EOF)
    {
        b=a*106739.5681711182;
        b=b/100000;
        printf("%.10lf\n",b);
    }
    return 0;
}
