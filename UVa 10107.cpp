#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int a,b=0,c[10000],d,e,f,g,h;
    while(cin>>a)
    {
        c[b++]=a;
        sort(c,c+b);
        if(b%2==1)
            cout<<c[b/2]<<endl;
        else
        {
            cout<<(c[b/2-1]+c[b/2])/2<<endl;
        }
    }
    return 0;
}
