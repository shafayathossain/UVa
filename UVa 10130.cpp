#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int d[1005][3];

int main()
{
    int a,b,c,e,f,g,i;
    cin>>a;
    while(a!=0)
    {
        int h[1005][50];
        cin>>b;
        for(c=1;c<=b;c++)
        {
            cin>>d[c][0]>>d[c][1];
        }
        for(e=0;e<=b;e++)
        {
            for(f=0;f<=50;f++)
            {
                if(f==0 || e==0)
                    h[e][f]=0;
                else if(d[e][1]>f)
                    h[e][f]=h[e-1][f];
                else
                {
                    i=d[e][1];
                    if(h[e-1][f]>(d[e][0]+h[e-1][f-i]))
                        h[e][f]=h[e-1][f];
                    else
                        h[e][f]=d[e][0]+h[e-1][f-i];
                }
            }
        }
        cin>>e;
        i=0;
        for(f=0;f<e;f++)
        {
            cin>>g;
            i=i+h[b][g];
        }
        cout<<i<<endl;
        a--;
    }
    return 0;
}
