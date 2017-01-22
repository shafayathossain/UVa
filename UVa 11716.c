#include<stdio.h>
#include<string.h>
#include<math.h>

int sti(char m[1000])
{
    int a=0,b=1,c,d;
    c=strlen(m);
    for(d=c-1;d>=0;d--)
    {
        a=a+(m[d]-'0')*b;
        b=b*10;
    }
    return a;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[10050];
    gets(m);
    a=sti(m);
    for(b=1;b<=a;b++)
    {
        gets(m);
        c=strlen(m);
        d=sqrt(c);
        if((d*d)!=c)
        {
            printf("INVALID\n");
            continue;
        }
        g=1;
        for(e=0;g<=c;e=e+d)
        {
            f=e%(c-1);
            if(f==0 && e!=0)
                f=c-1;
            printf("%c",m[f]);
            e=f;
            g++;
        }
        printf("\n");
    }
    return 0;
}
