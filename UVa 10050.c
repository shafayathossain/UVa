#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l[5000];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(e=0;e<=4000;e++)
        {
            l[e]=0;
        }
        scanf("%d",&c);
        scanf("%d",&d);
        for(e=1;e<=d;e++)
        {
            scanf("%d",&f);
            for(g=f;g<=c;g=g+f)
            {
                if(g%7!=6 && g%7!=0)
                    l[g]=1;
            }
        }
        d=0;
        for(g=1;g<=c;g++)
    	{
        	if(l[g]!=0)
        		d++;
    	}
    	printf("%d\n",d);
    }
    return 0;
}
