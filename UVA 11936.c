#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d",&c,&d,&e);
        if((c+d)>e && (d+e)>c && (e+c)>d)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
