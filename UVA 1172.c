#include<stdio.h>

struct bridge
{
    int cost;
    char city[11];
    char town[11];
}left[1000],right[1000];

int main()
{
    int a,b,c,d,e[1000][10],f,g,h,i;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        for(d=0;d<c;d++)
        {
            scanf("%s %s %d",left[d].town,left[d].city,left[d].cost);
        }
        scanf("%d",&c);
        for(d=0;d<c;d++)
        {
            scanf("%s %s %d",left[d].town,left[d].city,left[d].cost);
        }

    }
}
