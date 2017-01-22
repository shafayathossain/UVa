#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

queue<int>row;
queue<int>column;

int dfs(char oil[100][100])
{
    int a,b;
    a=row.front();
    b=column.front();
    if(a-1>=0 && b-1>=0 && oil[a][b]=='@')
    {
        row.push[a];
        coulmn.push[b];
        dfs(oil);
    }
    if(a-1>=0 && oil[a-1][b]=='@')
    {
        row.push[a-1];
        coulmn.push[b];
        dfs(oil);
    }
}

int main()
{
    int a,b,c,d,e,f,g,h,i;
    char oil[100][100];
    //freopen("input.txt","r",stdin);
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                cin>>oil[c][d];
            }
        }
        for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
            {
                if(oil[c][d]=='@')
                {
                    row.push(c);
                    column.push(d);
                    dfs(oil);
                }
            }
        }
        /*for(c=0;c<a;c++)
        {
            for(d=0;d<b;d++)
                cout<<oil[c][d];
            cout<<endl;
        }*/
    }
    return 0;
}
