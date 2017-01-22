#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[100];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",m);
        e=0;
        f=0;
        g=1;
        e=(m[0]-65)*26*26+(m[1]-65)*26+(m[2]-65);
        f=(m[4]-'0')*1000+(m[5]-'0')*100+(m[6]-'0')*10+(m[7]-'0');
        f=e-f;
        if(f<0)
            f=f*-1;
        if(f<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
