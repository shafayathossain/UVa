#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

bool prime(int a)
{
    int b;
    for(b=2;b<=sqrt(a);b++)
    {
        if(a%b==0)
            break;
    }
    if(b>sqrt(a))
        return true;
    else
        return false;
}

int main()
{
    int a,b,c,d,e,f,g,h;
    while(cin>>a)
    {
        if(a==0)
            break;
        for(b=2;b<=a/2;b++)
        {
            if(prime(b) && prime(a-b))
            {
                cout<<a<<" = "<<b<<" + "<<a-b<<endl;
                break;
            }
        }
        if(b>a/2)
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
