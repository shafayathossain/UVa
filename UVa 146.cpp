#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[10000],n;
    while(cin>>m)
    {
        if(!strcmp(m,"#"))
            break;
        a=strlen(m);
        c=a+1;
        d=a+1;
        for(b=0;b<a;b++)
        {
            if(m[b]<m[b+1] && b<a-1)
            {
                c=b;
            }
            if(b>c && b<a && m[b]>m[c])
                d=b;
        }
        if(c==a+1)
        {
            cout<<"No Successor\n";
            continue;
        }
        n=m[c];
        m[c]=m[d];
        m[d]=n;
        for(b=c+1;b<((a-c-1)/2)+c+1;b++)
        {
            n=m[b];
            m[b]=m[a-b+c];
            m[a-b+c]=n;
        }
        cout<<m<<endl;
    }
    return 0;
}
