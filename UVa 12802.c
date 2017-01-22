#include<stdio.h>
#include<math.h>
#include<string.h>

int strtoi(char m[1000])
{
    int a,b,c,d,e,f;
    a=strlen(m);
    c=0;
    d=1;
    for(b=a-1;b>=0;b--)
    {
    	e=m[b]-'0';
    	c=c+e*d;
    	d=d*10;
    }
    return c;
}

int rev(char m[1000])
{
	int a,b,c,d,e,f,g;
	char n[1000],o;
	strcpy(n,m);
	a=strlen(m);
	for(b=0;b<a/2;b++)
	{
		o=m[b];
		m[b]=m[a-1-b];
		m[a-1-b]=o;
	}
	if(strcmp(m,n)==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[1000];
    while(scanf("%s",m)!=EOF)
    {
        a=strtoi(m);
        b=rev(m);
        for(c=2;c<=sqrt(a);c++)
        {
            if(a%c==0)
                break;
        }
        if(c<=sqrt(a))
            d=0;
        else
            d=1;
        printf("%d\n",2*a);
        if(a==1 || (b==1 && d==1))
            break;
    }
    return 0;
}
