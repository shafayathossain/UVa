#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[100],n[100];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%s %s",m,n);
        c=strlen(m);
        d=strlen(n);
        if(strcmp(m,n)==0)
            printf("Yes\n");
        else if(c!=d)
            printf("No\n");
        else if(c==d && strcmp(m,n)!=0)
        {
            for(e=0;e<c;e++)
            {
                if(m[e]!=n[e])
                {
                    if((m[e]== 'a' || m[e]=='e' || m[e]=='i' || m[e]=='o' || m[e]=='u') && (n[e]=='a' || n[e]=='e' || n[e]=='i' || n[e]=='o' || n[e]=='u'))
                        continue;
                    else
                    {
                        printf("No\n");
                        break;
                    }
                }
            }
            if(e==c)
                printf("Yes\n");
        }
    }
    return 0;
}
