#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g[20],h,i[20],j,k,l;
    char m[100],n[100],o;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s %c %s",m,&o,n);
        c=strlen(m);
        j=1;
        k=0;
        h=12;
        for(d=0;d<13;d++)
        {
            g[d]=0;
            i[d]=0;
        }
        for(d=c-1;d>=0;d--)
        {
            f=m[d]-'0';
            if(m[d]>='A' && m[d]<='Z')
            {
                f=m[d]-55;
            }
            k=k+f*j;
            j=j*16;
            c=0;
            while(c!=4)
            {
                g[h]=f%2;
                f=f/2;
                h--;
                c++;
            }
        }
        h=12;
        l=0;
        j=1;
        c=strlen(n);
        for(d=c-1;d>=0;d--)
        {
            f=n[d]-'0';
            if(n[d]>='A' && m[d]<='Z')
            {
                f=n[d]-55;
            }
            l=l+f*j;
            j=j*16;
            c=0;
            while(c!=4)
            {
                i[h]=f%2;
                f=f/2;
                h--;
                c++;
            }
        }
        for(d=0;d<13;d++)
        {
            printf("%d",g[d]);
        }
        if(o=='+')
        {
            printf(" %c ",o);
            k=k+l;
        }
        else
        {
            printf(" %c ",o);
            k=k-l;
        }
        for(d=0;d<13;d++)
        {
            printf("%d",i[d]);
        }
        printf(" = %d\n",k);
    }
    return 0;
}
