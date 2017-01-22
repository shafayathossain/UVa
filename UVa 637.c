#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        printf("Printing order for %d pages:\n",a);
        b=a/4;
        if(a%4!=0)
            b++;
        f=b*4;
        g=1;
        h=0;
        for(c=1; c<=b; c++)
        {
            printf("Sheet %d, front: ",c);
            d=f-h;
            e=g+h;
            if(d>a)
                printf("Blank, ");
            else
                printf("%d, ",d);
            printf("%d\n",e);
            h++;
            if(e<a)
            {
                printf("Sheet %d, back : ",c);
                d=f-h;
                e=g+h;
                printf("%d, ",e);
                if(d>a)
                    printf("Blank\n");
                else
                    printf("%d\n",d);
                h++;
            }
        }
    }
    return 0;
}
