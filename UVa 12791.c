#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        c=ceil(b/(b-a));
        printf("%.0lf\n",c);
    }
    return 0;
}
