#include<stdio.h>
#include<string.h>

int main()
{
    char a[10],b[10],c;
    int m,n,o,p;
    scanf("%d",&m);
    for(n=1;n<=m;n++)
    {
        p=0;
        scanf("%s",a);
        o=strlen(a);
        if(o==3)
        {
            if(a[0]=='o')
                p++;
            if(a[1]=='n')
                p++;
            if(a[2]=='e')
                p++;
            if(p>=2)
                printf("1\n");
            else
                printf("2\n");
        }
        else
            printf("3\n");
    }
    return 0;
}
