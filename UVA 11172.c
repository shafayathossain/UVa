#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d",&c,&d);
        if(c>d)
            printf(">\n");
        else if(c<d)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
