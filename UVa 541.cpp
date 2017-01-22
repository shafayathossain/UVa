#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e[202][202],f,g,h,i;
    while(cin>>a)
    {
        if(a==0)
            break;
        for(b=0;b<=2*a;b++)
        {
            for(c=0;c<=2*a;c++)
            	e[b][c]=0;
        }
        f=0;
        g=0;
        for(b=0;b<a;b++)
        {
            for(c=0;c<a;c++)
            {
                cin>>d;
                e[b+a+1][c]=e[b+a][c]+d;
                e[b][c+a+1]=e[b][c+a]+d;
                if((e[b+1+a][c])%2==1 && b==(a-1))
                {
                    h=c;
                    f++;
                }
                if((e[b][c+1+a])%2==1 && c==(a-1))
                {
                    i=b;
                    g++;
                }
            }
        }
        if(f>1 || g>1)
        {
        	cout<<"Corrupt\n";
        }
        else if(f==1 && g==1)
            printf("Change bit (%d,%d)\n",i+1,h+1);
        else
            cout<<"OK\n";
    }
    return 0;
}
