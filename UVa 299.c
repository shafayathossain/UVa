#include<stdio.h>

int main()
{
    int a,b,c,d,e[100],f,g,h,i,j,k,l;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        scanf("%d",&c);
        for(d=1;d<=c;d++)
        {
            scanf("%d",&e[d-1]);
        }
        i=0;
        for(f=0;f<c-1;f++)
        {
            for(g=0;g<c-f-1;g++)
            {
                if(e[g]>e[g+1])
                {
                    i++;
                    h=e[g];
                    e[g]=e[g+1];
                    e[g+1]=h;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",i);
    }
    return 0;
}
