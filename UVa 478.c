#include<stdio.h>
#include<math.h>

int main()
{
    int a[20],b=0,c=0,d=0,e=0,f=0,o,p;
    double g[20][10],h[20][10],i[20][10],j,k,l,u,v,w,x,y,z;
    char m,n;
    while(scanf(" %c ",&m)==1)
    {
        if(m=='r')
        {
            scanf("%lf %lf %lf %lf",&g[d][0],&g[d][1],&g[d][2],&g[d][3]);
            a[b]=1;
            b++;
            d++;
        }
        else if(m=='c')
        {
            scanf("%lf %lf %lf",&h[e][0],&h[e][1],&h[e][2]);
            a[b]=2;
            b++;
            e++;
        }
        else if(m=='t')
        {
            scanf("%lf %lf %lf %lf %lf %lf",&i[f][0],&i[f][1],&i[f][2],&i[f][3],&i[f][4],&i[f][5]);
            a[b]=3;
            b++;
            f++;
        }
        else if(m=='*')
            break;
    }
    o=1;
    while(scanf(" %lf %lf ",&j,&k)==2)
    {
        d=0;
        e=0;
        f=0;
        p=0;
        if(j==9999.9000000000000 && k==9999.9000000000000)
        {
            break;
        }
        for(c=0; c<b; c++)
        {
            if(a[c]==1)
            {
                if((j>g[d][0] && j<g[d][2]) && (k<g[d][1] && k>g[d][3]))
                {
                    printf("Point %d is contained in figure %d\n",o,c+1);
                    p=1;
                }
                d++;
            }
            else if(a[c]==2)
            {
                x=((j-h[e][0])*(j-h[e][0]))+((k-h[e][1])*(k-h[e][1]));
                x=sqrt(x);
                if(x<h[e][2])
                {
                    printf("Point %d is contained in figure %d\n",o,c+1);
                    p=1;
                }
                e++;
            }
            else if(a[c]==3)
            {
                w=(j*(i[f][1]-i[f][3])+i[f][0]*(i[f][3]-k)+i[f][2]*(k-i[f][1]))/2.0;
                if(w<0.0)
                    w=w*(-1.0);
                x=(j*(i[f][3]-i[f][5])+i[f][2]*(i[f][5]-k)+i[f][4]*(k-i[f][3]))/2.0;
                if(x<0.0)
                    x=x*(-1.0);
                y=(j*(i[f][1]-i[f][5])+i[f][0]*(i[f][5]-k)+i[f][4]*(k-i[f][1]))/2.0;
                if(y<0.0)
                    y=y*(-1.0);
                z=(i[f][4]*(i[f][1]-i[f][3])+i[f][0]*(i[f][3]-i[f][5])+i[f][2]*(i[f][5]-i[f][1]))/2.0;
                if(w==0.0 || x==0.0 || y==0.0)
                    continue;
                if(z<0.0)
                    z=z*(-1.0);
                u=w+x+y;
                if(z-u>=-0.00000001 && z-u<=0.00000001)
                {
                    printf("Point %d is contained in figure %d\n",o,c+1);
                    p=1;
                }
                f++;
            }
        }
        if(p==0)
            printf("Point %d is not contained in any figure\n",o);
        o++;
    }
    return 0;
}
