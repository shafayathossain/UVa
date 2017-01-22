#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e[10],f,g,h,i,j,k,l;
    char m[1000];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",m);
        for(d=0;d<10;d++)
            e[d]=0;
        c=strlen(m);
        for(d=0;d<c;d++)
        {
            if(m[d]=='M')
                e[0]++;
            else if(m[d]=='A')
                e[1]++;
            else if(m[d]=='R')
                e[2]++;
            else if(m[d]=='G')
                e[3]++;
            else if(m[d]=='I')
                e[4]++;
            else if(m[d]=='T')
                e[5]++;
        }
        e[1]/=3;
        e[2]/=2;
        f=e[0];
        for(d=1;d<6;d++)
        {
            if(e[d]<f)
                f=e[d];
        }
        printf("%d\n",f);
    }
    return 0;
}
