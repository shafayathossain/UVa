#include<iostream>
#include<stdio.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b,c,d[200][200],f,g,h,i,up,down,left,right;
    freopen("input.txt","r",stdin);
    while(cin>>a)
    {
        int e[200];
        for(b=0;b<a;b++)
        {
            for(c=0;c<a;c++)
            {
                cin>>d[b][c];
            }
        }
        h=INT_MIN;
        i=INT_MIN;
        for(b=0;b<a;b++)
        {
            for(c=0;c<a;c++)
            {
                e[c]=0;
            }
            for(c=b;c<a;c++)
            {
                g=0;
                for(f=0;f<a;f++)
                {
                    e[f]=e[f]+d[f][c];
                    //cout<<e[f]<<" "<<d[f][c]<<endl;
                }
                for(f=0;f<a;f++)
                {
                    g=g+e[f];
                    i=maximum(g,e[f]);
                    if(e[f]>g)
                    {
                        g=e[f];
                    }
                    h=maximum(h,i);
                    cout<<h<<" "<<i<<" "<<g<<endl;
                }
            }
        }
        cout<<h;
    }
}
