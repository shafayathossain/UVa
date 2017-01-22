#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i[10000],j,k,l,m,n[101];
    for(b=0;b<=10000;b++)
        i[b]=1;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(f=0;f<=100;f++)
            n[f]=0;
        scanf("%d %d %d",&c,&d,&e);
        for(f=0;f<d;f++)
        {
            scanf("%d %d",&g,&h);
            n[g]=h;
        }
        l=1;
        for(f=0;f<e;f++)
        {
            scanf("%d",&j);
            k=(f%c);
            if(l==1)
            {
                i[k]=i[k]+j;
            }
            if(n[i[k]]!=0)
                    i[k]=n[i[k]];
            if(i[k]>=100)
            {
                l=0;
                i[k]=100;
            }
        }
        for(f=0;f<c;f++)
        {
            printf("Position of player %d is %d.\n",f+1,i[f]);
            i[f]=1;
        }
    }
    return 0;
}
