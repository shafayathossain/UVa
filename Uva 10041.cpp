#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,d[1000],e,f,g[1000],h;
    int c;
    cin>>a;
    while(a!=0)
    {
        cin>>b;
        e=0;
        for(c=0;c<b;c++)
        {
            cin>>d[c];
        }
        sort(d,d+b);
        if(b%2==0)
        {
            h=d[b/2-1];
        }
        else
        {
            b++;
            h=d[b/2-1];
            b--;
        }
        f=0;
        for(c=0;c<b;c++)
        {
            f=f+abs(h-d[c]);
        }
        cout<<f<<endl;
        a--;
    }
    return 0;
}
