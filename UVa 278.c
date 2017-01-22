#include <stdio.h>
#include<string.h>
#include<math.h>

int main ()
{
    int a,b,c,d,e,f;
    char m[2];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s",&m);
        scanf("%d %d",&c,&d);
        if(strcmp(m,"r")==0 || strcmp(m,"Q")==0)
        {
            if(c<d)
                printf("%d\n",c);
            else
                printf("%d\n",d);
        }
        else if(strcmp(m,"k")==0)
        {
            e=d/2;
            if(d%2==1)
                e++;
            f=d/2;
            if(c%2==0)
            {
                printf("%d\n",(e+f)*c/2);
            }
            else
            {
                c--;
                printf("%d\n",(c/2)*(e+f)+e);
            }
        }
        else
        {
            if(c%2==0)
                e=c/2;
            else
                e=c/2+1;
            if(d%2==0)
                f=d/2;
            else
                f=d/2+1;
            printf("%d\n",e*f);
        }
    }
    return 0;
}

