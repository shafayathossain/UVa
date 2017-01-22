#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    char m[10000],n;
    while(cin>>m)
    {
        a=strlen(m);
        b=0;
        c=0;
        while(scanf("%c",&n)!=EOF)
        {
            if(n=='\n')
                break;
            if(c!=a && m[c]==n)
                c++;
        }
        if(c==a)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
