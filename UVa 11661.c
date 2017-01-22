#include<stdio.h>
#include<string.h>

char m[2000000];

int main()
{
    long int a,b,c,d,e,f,g,h,i,j,k;
    char n;
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
            break;
        scanf("%s",m);
        b=strlen(m);
        d=0;
        e=0;
        f=2000000;
        for(c=0;c<b;c++)
        {
            if(m[c]=='.' && d==1)
            {
                e++;
            }
            else if((m[c]=='R' || m[c]=='D') && d!=1)
            {
                n=m[c];
                d=1;
            }
            else if((m[c]=='R' || m[c]=='D') && d==1 && n!=m[c])
            {
                if(e<f)
                    f=e+1;
                e=0;
                n=m[c];
            }
            else if(n==m[c])
            {
                d=1;
                e=0;
            }
            else if(m[c]=='Z')
            {
                printf("0\n");
                break;
            }
        }
        if(c==b)
            printf("%ld\n",f);
    }
    return 0;
}
