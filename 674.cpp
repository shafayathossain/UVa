#include<iostream>
using namespace std;

int mini(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int coin[5]={50,25,10,5,1},a,b[10000];
    b[0]=0;
    for(int i=1;i<=10000;i++)
    {
        b[i]=10000;
    }
    for(int i=1;i<=7489;i++)
    {
        for(int j=0;j<5;j++)
        {
            int k=i-coin[j];
            if(k>=0)
                b[i]=mini(b[i],1+b[k]);
            if(i==4&& j==4)
                cout<<"b-i="<<b[i]<<endl;
        }
    }
    while(cin>>a)
    {
        cout<<b[a]<<endl;
    }
    return 0;
}
