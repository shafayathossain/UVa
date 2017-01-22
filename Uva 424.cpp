#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,k,l,n[100000];
    char m[100000];
    while(cin>>m)
    {
        if(strcmp(m,"0")==0)
            break;
        a=strlen(m);
        d=a;
        if(c>a)
            d=c;
        b=0;
        e=0;
        while(d>0)
        {
            f=0;
            if(a-1>=0)
                f=m[a-1]-48;
            e=e+f+n[b];
            n[b]=e%10;
            e=e/10;
            a--;
            b++;
            d--;
        }
        if(e>0)
        {
            n[b]=e;
            b++;
        }
        c=b;
    }
    for(b=c-1;b>=0;b--)
        cout<<n[b];
    cout<<endl;
    return 0;
}
