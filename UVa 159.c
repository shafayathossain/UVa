#include <stdio.h>
#include<string.h>

int main ()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,q=0,s,t;
    char m[100],n[100],o[100],p[100];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(scanf("%s",m))
    {
        if(strcmp(m,"#")==0)
            break;
        scanf("%s %s %s",n,o,p);
        if(q>0)
            printf("\n");
        a=strlen(m);
        b=strlen(n);
        c=strlen(o);
        d=strlen(p);
        for(e=0;e<a;e++)
        {
            for(f=0;f<b;f++)
            {
                if(m[e]==n[f])
                {
                    break;
                }
            }
            if(f!=b)
                break;
        }
        if(e==a)
        {
            printf("Unable to make two crosses\n");
            q++;
            continue;
        }
        for(h=0;h<c;h++)
        {
            for(i=0;i<d;i++)
            {
                if(p[i]==o[h])
                    break;
            }
            if(i!=d)
                break;
        }
        if(h==c)
        {
            printf("Unable to make two crosses\n");
            q++;
            continue;
        }
        if(f>i && (b-f)<(d-i))
        {
            j=f+(d-i);
            k=3+(a-e-1)+h+1;
        }
        else if(f>=i && (b-f)>=(d-i))
        {
            j=b;
            k=3+(a-e-1)+h+1;
        }
        else if(f<=i && (b-f)<=(d-i))
        {
            j=d;
            k=3+(a-e-1)+h+1;
        }
        else if(f<i && (b-f)>(d-i))
        {
            j=i+(b-f);
            k=3+(a-e-1)+h+1;
        }
        if((b-f)>=(d-i))
        {
            t=(d-i);
        }
        else if((b-f)<(d-i))
        {
            t=b-f;
        }
        l=0;
        if(f>=i)
        {
            for(g=0;g<j;g++)
            {
                if(g<(f-i))
                    printf("%*c\n",e+1,n[g]);
                else if(g>=(f-i) && g<f)
                {
                    printf("%*c%*c\n",e+1,n[g],k,p[l]);
                    l++;
                }
                else if(g==f)
                {
                    printf("%s   %s\n",m,o);
                    l++;
                }
                else if(g>f && g<=f+t-1)
                {
                    printf("%*c%*c\n",e+1,n[g],k,p[l]);
                    l++;
                }
                else
                {
                    if((f+t)==b)
                    {
                        printf("%*c\n",(k+e+1),p[l]);
                        l++;
                    }
                    else
                    {
                        printf("%*c\n",e+1,n[g]);
                        l++;
                    }
                }
            }
            q++;
        }
        else
        {
            for(g=0;g<j;g++)
            {
                if(g<(i-f))
                    printf("%*c\n",(e+1+k),p[g]);
                else if(g>=(i-f) && g<i)
                {
                    printf("%*c%*c\n",e+1,n[l],k,p[g]);
                    l++;
                }
                else if(g==i)
                {
                    printf("%s   %s\n",m,o);
                    l++;
                }
                else if(g>i && g<=i+t-1)
                {
                    printf("%*c%*c\n",e+1,n[l],k,p[g]);
                    l++;
                }
                else
                {
                    if((f+t)==b)
                    {
                        printf("%*c\n",(k+e+1),p[g]);
                        l++;
                    }
                    else
                    {
                        printf("%*c\n",e+1,n[l]);
                        l++;
                    }
                }
            }
            q++;
        }
    }
    return 0;
}
