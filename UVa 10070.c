#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i=0;
    char m[10000];
    while(gets(m))
    {
    	if(i>0)
    		printf("\n");
    	f=0;
    	g=0;
        a=strlen(m);
        b=(m[a-1]-'0')+(m[a-2]-'0')*10;
        h=(m[a-3]-'0')+(m[a-4]-'0')*10;
        if((b!=0 && b%4==0) || (h%4==0 && b==0))
        {
            printf("This is leap year.\n");
            f++;
            g++;
        }
        c=0;
        d=0;
        e=1;
        for(b=0;b<a;b++)
        {
            if(b%2==0)
                e=1;
            else
                e=-1;
            c=c+(m[b]-'0');
            d=d+e*(m[b]-'0');
        }
        if(c%3==0 && (m[a-1]=='0' || m[a-1]=='5'))
        {
            printf("This is huluculu festival year.\n");
            f++;
        }
        if(d%11==0 && (m[a-1]='0' || m[a-1]=='5') && g==1)
        {
            printf("This is bulukulu festival year.\n");
            f++;
        }
        if(f==0)
            printf("This is an ordinary year.\n");
        i++;
    }
    return 0;
}
