#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long int a,b,c,d=1,e,f,g,h;
    while(cin>>a>>b)
    {
        if(a<0 && b<0)
            break;
        c=1;
        e=a;
        while(a!=1 )
        {
            if(a%2==0)
                a/=2;
            else
                a=3*a+1;
            if(a>b)
                break;
            c++;
        }
        cout<<"Case "<<d<<": A = "<<e<<", limit = "<<b<<", number of terms = "<<c<<endl;
        d++;
    }
    return 0;
}
