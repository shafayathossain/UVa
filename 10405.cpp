#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int d[10000][10000];

int maxim(int m,int n)
{
    if(n>m)
        m=n;
    return m;
}

int main()
{
    int a,b,c,e,f,g,h,i;
    for(c=0;c<10000;c++)
    {
        d[0][c]=0;
        d[c][0]=0;
    }
    char m[10000],n[10000];
    while(gets(m))
    {
        gets(n);
        a=strlen(m);
        b=strlen(n);

        for(c=0;c<a;c++)
        {
            f=1;
            for(e=0;e<b;e++)
            {
                if(m[c]==n[e])
                {
                    d[c+1][e+1]=d[c][e]+1;
                }
                else
                {
                    d[c+1][e+1]=maxim(d[c+1][e],d[c][e+1]);
                }
            }
        }

        cout<<d[a][b]<<endl;
    }
    return 0;
}
