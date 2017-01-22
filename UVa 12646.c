#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a!=b && a!=c && b==c)
            printf("A\n");
        else if(b!=a && b!=c && a==c)
            printf("B\n");
        else if(c!=a && c!=b && a==b)
            printf("C\n");
        else
            printf("*\n");
    }
    return 0;
}
