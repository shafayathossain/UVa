#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,n;
    double x;
    char m[100];
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%lf %s %d",&x,m,&c);
        d=x;
        if(strcmp(m,"pop")==0)
            e=1;
        else if(strcmp(m,"no")==0)
            e=2;
        else if(strcmp(m,"zip")==0)
            e=3;
        else if(strcmp(m,"zotz")==0)
            e=4;
        else if(strcmp(m,"tzec")==0)
            e=5;
        else if(strcmp(m,"xul")==0)
            e=6;
        else if(strcmp(m,"yoxkin")==0)
            e=7;
        else if(strcmp(m,"mol")==0)
            e=8;
        else if(strcmp(m,"chen")==0)
            e=9;
        else if(strcmp(m,"yax")==0)
            e=10;
        else if(strcmp(m,"zac")==0)
            e=11;
        else if(strcmp(m,"ceh")==0)
            e=12;
        else if(strcmp(m,"mac")==0)
            e=13;
        else if(strcmp(m,"kankin")==0)
            e=14;
        else if(strcmp(m,"muan")==0)
            e=15;
        else if(strcmp(m,"pax")==0)
            e=16;
        else if(strcmp(m,"koyab")==0)
            e=17;
        else if(strcmp(m,"cumhu")==0)
            e=18;
        else if(strcmp(m,"uayet")==0)
            e=19;
        f=d+1+(e-1)*20+c*365;
        g=f/260;
        h=f-g*260;
        if(h==0)
        {
            h=g*260-(g-1)*260;
            g--;
        }
        j=0;
        k=0;
        for(i=1;i<=h;i++)
        {
            j++;
            k++;
            if(j==21)
            {
                j=1;
            }
            if(k==14)
            {
                k=1;
            }
        }
        if(b==1)
            printf("%d\n",a);
        printf("%d ",k);
        if(j==1)
            printf("imix ");
        else if(j==2)
            printf("ik ");
        else if(j==3)
            printf("akbal ");
        else if(j==4)
            printf("kan ");
        else if(j==5)
            printf("chicchan ");
        else if(j==6)
            printf("cimi ");
        else if(j==7)
            printf("manik ");
        else if(j==8)
            printf("lamat ");
        else if(j==9)
            printf("muluk ");
        else if(j==10)
            printf("ok ");
        else if(j==11)
            printf("chuen ");
        else if(j==12)
            printf("eb ");
        else if(j==13)
            printf("ben ");
        else if(j==14)
            printf("ix ");
        else if(j==15)
            printf("mem ");
        else if(j==16)
            printf("cib ");
        else if(j==17)
            printf("caban ");
        else if(j==18)
            printf("eznab ");
        else if(j==19)
            printf("canac ");
        else if(j==20)
            printf("ahau ");
        printf("%d\n",g);
    }
    return 0;
}
