#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        a=sqrt(a-1);
        b=sqrt(b);
        printf("%d\n",b-a);
    }
    return 0;
}
