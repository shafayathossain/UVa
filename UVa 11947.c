#include<stdio.h>

int main()
{
    long long int d,e,f,g,h,i,j,k,l,n;
    int a,b,c,m;
    scanf("%d",&m);
    for(l=1; l<=m; l++)
    {
        scanf("%2d %2d %4d",&b,&a,&c);
        b=(b+9)%12;
        c=c-(b/10);
        n=365*c+c/4-c/100+c/400+(b*306+5)/10+a-1;
        n=n+40*7;
        e=(10000*n+14780)/3652425;
        f=n-(365*e+e/4-e/100+e/400);
        if(f<0)
        {
            e=e-1;
            f=n-(365*e+e/4-e/100+e/400);
        }
        h=(100*f+52)/3060;
        g=(h+2)%12+1;
        e=e+(h+2)/12;
        i=f-(h*306+5)/10+1;
        if(g==1)
        {
            if(i>=21)
                printf("%lld %.2lld/%.2lld/%.4lld aquarius\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld capricorn\n",l,g,i,e);
        }
        else if(g==2)
        {
            if(i>=20)
                printf("%lld %.2lld/%.2lld/%.4lld pisces\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld aquarius\n",l,g,i,e);
        }
        else if(g==3)
        {
            if(i>=21)
                printf("%lld %.2lld/%.2lld/%.4lld aries\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld pisces\n",l,g,i,e);
        }
        else if(g==4)
        {
            if(i>=21)
                printf("%lld %.2lld/%.2lld/%.4lld taurus\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld aries\n",l,g,i,e);
        }
        else if(g==5)
        {
            if(i>=22)
                printf("%lld %.2lld/%.2lld/%.4lld gemini\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld taurus\n",l,g,i,e);
        }
        else if(g==6)
        {
            if(i>=22)
                printf("%lld %.2lld/%.2lld/%.4lld cancer\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld gemini\n",l,g,i,e);
        }
        else if(g==7)
        {
            if(i>=23)
                printf("%lld %.2lld/%.2lld/%.4lld leo\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld cancer\n",l,g,i,e);
        }
        else if(g==8)
        {
            if(i>=22)
                printf("%lld %.2lld/%.2lld/%.4lld virgo\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld leo\n",l,g,i,e);
        }
        else if(g==9)
        {
            if(i>=24)
                printf("%lld %.2lld/%.2lld/%.4lld libra\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld virgo\n",l,g,i,e);
        }
        else if(g==10)
        {
            if(i>=24)
                printf("%lld %.2lld/%.2lld/%.4lld scorpio\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld libra\n",l,g,i,e);
        }
        else if(g==11)
        {
            if(i>=23)
                printf("%lld %.2lld/%.2lld/%.4lld sagittarius\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld scorpio\n",l,g,i,e);
        }
        else if(g==12)
        {
            if(i>=23)
                printf("%lld %.2lld/%.2lld/%.4lld capricorn\n",l,g,i,e);
            else
                printf("%lld %.2lld/%.2lld/%.4lld sagittarius\n",l,g,i,e);
        }
    }
    return 0;
}
