#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d",&c,&d);
        for(e=1;e<=d;e++)
        {
            if(c==1)
            {
                printf("1\n");
            }
            if(c==2)
            {
                printf("1\n22\n1\n");
            }
            if(c==3)
            {
                printf("1\n22\n333\n22\n1\n");
            }
            if(c==4)
            {
                printf("1\n22\n333\n4444\n333\n22\n1\n");
            }
            if(c==5)
            {
                printf("1\n22\n333\n4444\n55555\n4444\n333\n22\n1\n");
            }
            if(c==6)
            {
                printf("1\n22\n333\n4444\n55555\n666666\n55555\n4444\n333\n22\n1\n");
            }
            if(c==7)
            {
                printf("1\n22\n333\n4444\n55555\n666666\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
            }
            if(c==8)
            {
                printf("1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
            }
            if(c==9)
            {
                printf("1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n999999999\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1\n");
            }
            if(b!=a)
            	printf("\n");
            else if(b==a)
            {
            	if(e<d)
            		printf("\n");
            }
        }
    }
    return 0;
}
