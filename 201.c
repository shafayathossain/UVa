#include <stdio.h>

int main ()
{
    int a,b,c,d,e,f[20][20],g,h,i,j,k,l=1,m=0,n;
    char w,x,y;
    while(scanf("%d %d ",&a,&b)==2)
    {
        h=0;
        i=0;
        j=0;
        k=0;
        for(c=0;c<a;c++)
        {
            for(d=0;d<a;d++)
            {
                f[c][d]=0;
            }
        }
        for(c=1;c<=b;c++)
        {
            h=0;
            i=0;
            j=0;
            k=0;
            scanf("%c %d %d ",&w,&d,&e);
            if(w=='H' && f[d-1][e-1]==0)
                f[d-1][e-1]=1;
            else if(w=='H' && f[d-1][e-1]==2)
                f[d-1][e-1]=3;
            else if(w=='V' && f[e-1][d-1]==0)
                f[e-1][d-1]=2;
            else if(w=='V' && f[e-1][d-1]==1)
                f[e-1][d-1]=3;
        }
        if(l>1)
            printf("\n**********************************\n\n");
        printf("Problem #%d\n\n",l);
        m=0;
        for(c=0;c<a;c++)
        {
            k=0;
            for(d=0;d<a;d++)
            {
                for(e=0;e<a;e++)
                {
                    h=0;
                    i=0;
                    j=0;
                    for(g=0;g<=c;g++)
                    {
                        if(g==0)
                        {
                            if(f[d][e+g]==3)
                                h++;
                        }
                        else if(g>0)
                        {
                            if((f[d][e+g]==3 || f[d][e+g]==1) && (f[d+g][e]==3 || f[d+g][e]==2))
                                h++;
                        }
                    }
                    for(g=0;g<=c;g++)
                    {
                        if(f[d+g][e+c+1]==2 || f[d+g][e+c+1]==3)
                            i++;
                    }
                    for(g=0;g<=c;g++)
                    {
                        if(f[d+c+1][e+g]==1 || f[d+c+1][e+g]==3)
                        {
                            j++;
                        }
                    }
                    if((h-1)==c && (i-1)==c && (j-1)==c)
                        k++;
                }
            }
            if(k>0)
            {
                m=1;
                printf("%d square (s) of size %d\n",k,c+1);
            }
        }
        if(c==a && m==0)
            printf("No completed squares can be found.\n");
        l++;
    }
    return 0;
}
