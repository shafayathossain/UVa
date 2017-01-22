#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g;
    char m[1000],n[10];
    freopen("input.txt","r",stdin);
    gets(n);
    a=atoi(n);
    for(b=1;b<=a;b++)
    {
        e=0;
        gets(m);
        c=strlen(m);
        for(d=0;d<c;d++)
        {
            if(m[d]=='a' || m[d]=='d' || m[d]=='g' || m[d]=='j' || m[d]=='m' || m[d]=='p' || m[d]=='t' || m[d]=='w' || m[d]==' ')
            {
                e++;
            }
            else if(m[d]=='b' || m[d]=='e' || m[d]=='h' || m[d]=='k' || m[d]=='n' || m[d]=='q' || m[d]=='u' || m[d]=='x')
            {
                e+=2;
            }
            else if(m[d]=='c' || m[d]=='f' || m[d]=='i' || m[d]=='l' || m[d]=='o' || m[d]=='r' || m[d]=='v' || m[d]=='y')
            {
                e+=3;
            }
            else if(m[d]=='s'|| m[d]=='z')
            {
                e+=4;
            }
        }
        printf("Case #%d: %d\n",b,e);
    }
    return 0;
}
