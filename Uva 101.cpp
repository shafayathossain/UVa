#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int stack1[100][100],ele[100];
int Move(int a,int b,char m[10])
{
    int c,d,e,f,g,h;
    c=stack1[a][0];
    h=stack1[b][0];
    if(c!=stack1[h][0])
    {
        d=ele[c];
        while(stack1[c][d-1]!=a)
        {
            e=stack1[c][d-1];
            stack1[e][0]=e;
            ele[e]=1;
            d--;
        }
        ele[c]=d;
        if(strcmp(m,"onto")==0)
        {
            d=ele[h];
            while(stack1[h][d-1]!=b)
            {
                e=stack1[h][d-1];
                stack1[e][0]=e;
                ele[e]=1;
                d--;
            }
            ele[h]=d;
        }
        stack1[h][ele[h]]=a;
        stack1[a][0]=h;
        ele[h]++;
        ele[c]--;
    }
}

int pile(int a,int b,char m[10])
{
    int c,d,e,f,g,h;
    c=stack1[a][0];
    h=stack1[b][0];
    if(c!=h)
    {
	    g=0;
	    while(stack1[c][g]!=a)
	        g++;
	    if(c!=stack1[h][0])
	    {
	        if(strcmp(m,"onto")==0)
	        {
	            d=ele[h];
	            while(stack1[h][d-1]!=b)
	            {
	                e=stack1[h][d-1];
	                stack1[e][0]=e;
	                ele[e]=1;
	                d--;
	            }
	            ele[h]=d;
	        }
	        f=g;
	        while(f!=ele[c])
	        {
	            e=stack1[c][f];
	            stack1[h][ele[h]]=stack1[c][f];
	            f++;
	            ele[h]++;
	            stack1[e][0]=h;
	        }
	        ele[c]=g;
	    }
    }
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    char m[10],n[10];
    cin>>a;
    for(b=0;b<a;b++)
    {
        stack1[b][0]=b;
        ele[b]=1;
    }
    while(cin>>m)
    {
        if(strcmp(m,"quit")==0)
        {
            break;
        }
        cin>>b>>n>>c;
        if(strcmp(m,"move")==0)
            Move(b,c,n);
        else
            pile(b,c,n);

    }
    for(d=0;d<a;d++)
	{
        cout<<d<<":";
        for(e=0;e<ele[d];e++)
            cout<<" "<<stack1[d][e];
        cout<<endl;
    }
    return 0;
}
