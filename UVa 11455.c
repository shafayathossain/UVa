#include<stdio.h>

int main()
{
    int a,b,c,d[4],e,f,g,h,i,j,k;
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        for(c=0;c<4;c++)
        {
            scanf("%d",&d[c]);
        }
        for(e=1;e<4;e++)
        {
            g=d[e];
            h=e;
            for(f=e-1;f>=0;f--)
            {
                if(d[f]>g)
                {
                    d[h]=d[f];
                    d[f]=g;
                    h--;
                }
                else
                    break;
            }
        }
        if(d[0]==d[1] && d[0]==d[2] && d[0]==d[3])
            printf("square\n");
        else if(d[0]==d[1] && d[2]==d[3])
            printf("rectangle\n");
        else if((d[0]+d[1]+d[2])>d[3])
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
