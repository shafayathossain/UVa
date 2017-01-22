#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[100],n[100];
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        b=0;
        while(a!=0)
        {
            m[b]=(a%2)+'0';
            b++;
            a=a/2;
        }
        m[b]='\0';
        d=0;
        for(c=b-1;c>=0;c--,d++)
        {
            n[d]=m[c];
        }
        n[d]='\0';
        d=0;
        for(c=0;c<b;c++)
        {
            if(m[c]=='1')
                d++;
        }
        printf("The parity of %s is %d (mod 2).\n",n,d);
    }
    return 0;
}
