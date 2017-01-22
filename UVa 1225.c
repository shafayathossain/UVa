#include<stdio.h>

int main()
{
    int a,b,c,d,e,f[10],g,h,i;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%d",&c);
        for(d=0;d<10;d++)
        {
            f[d]=0;
        }
        for(d=1;d<=c;d++)
        {
            e=d;
            while(e!=0)
            {
                 f[e%10]++;
                 e=e/10;
            }
        }
        for(d=0;d<10;d++)
        {
            printf("%d",f[d]);
            if(d<9)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
