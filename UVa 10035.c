#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;;
    char m[12],n[12];
    while(scanf("%s %s",m,n)==2)
    {
        if(strcmp("0",m)==0 && strcmp("0",n)==0)
            break;
        a=strlen(m);
        b=strlen(n);
        h=0;
        i=0;
        for(c=a-1,d=b-1;c>=0 || d>=0;c--,d--)
        {
            if(c>=0)
                e=m[c]-'0';
            else
                e=0;
            if(d>=0)
                f=n[d]-'0';
            else
                f=0;
            g=e+f+i;
            if(g>9)
            {
                i=1;
                h++;
            }
            else
                i=0;
        }
        if(h>1)
        	printf("%d carry operations.\n",h);
        else if(h==0)
        	printf("No carry operation.\n");
        else if(h==1)
        	printf("%d carry operation.\n",h);
    }
    return 0;
}
