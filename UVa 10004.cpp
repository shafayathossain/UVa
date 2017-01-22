#include<iostream>
using namespace std;

class graph
{
public:
    int a[1000];
    int b;
    char x;
};

graph m[1000];
int y[1000],z;

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    while(cin>>a)
    {
        if(a==0)
            break;
        cin>>b;
        for(c=0;c<a;c++)
        {
            m[c].b=0;
            m[c].x='t';
        }
        for(c=0;c<b;c++)
        {
            cin>>d;
            cin>>e;
            m[d].a[m[d].b]=e;
            m[d].b++;
            m[e].a[m[e].b]=d;
            m[e].b++;
        }
        z=0;
        c=0;
        while(z>=0)
        {
            y[z]=c;
            z++;
            d=m[c].b;
            if(m[c].x!='r' && m[c].x!='g')
                m[c].x='r';
            for(e=0;e<d;e++)
            {
                f=m[c].a[e];
                if(m[f].x!='r' && m[f].x!='g')
                {
                    if(m[c].x=='r')
                        m[f].x='g';
                    else
                        m[f].x='r';
                    c=f;
                    break;
                }
            }
            if(e==d)
            {
                c=y[z-2]-1;
                z-=2;
            }
        }
        for(c=0;c<a;c++)
        {
            d=m[c].b;
            for(e=0;e<d;e++)
            {
                if(m[c].x==m[m[c].a[e]].x)
                    break;
            }
            if(e!=d)
                break;
        }
        if(c!=a)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}
