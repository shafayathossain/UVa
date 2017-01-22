#include<stdio.h>
#include<iostream>
#include<cstring>
#include<queue>
#include<string.h>
using namespace std;

int graph[30][30];
void bfs(int a,int b,int c)
{
    queue<int>n;
    n.push(a);
    while(n.empty()==0)
    {
        int row=n.front();
        for(int i=1;i<=b;i++)
        {
            if(graph[row][i]==1)
            {
                graph[row][i]=c;
                graph[i][row]=c;
                n.push(i);
            }
        }
        for(int i=1;i<=b;i++)
        {
            if(graph[i][row]==1)
            {
                graph[row][i]=c;
                graph[i][row]=c;
                n.push(i);
            }
        }
        n.pop();
    }
}


int main()
{
    int a,b,c,d,e,f,g,h;
    char ch[3];
    scanf("%d ",&a);
    for(b=1;b<=a;b++)
    {
        gets(ch);
        c=(int)ch[0]-64;
        memset(graph,0,sizeof(graph));
        for(int u=1;u<=c;u++)
            graph[u][u]=1;
        h=2;
        while(gets(ch))
        {
            if(strlen(ch)!=2)
                break;
            d=ch[0]-64;
            e=ch[1]-64;
            graph[d][e]=1;
            graph[e][d]=1;
        }
        for(f=1;f<=c;f++)
        {
            for(g=1;g<=c;g++)
            {
                if(graph[f][g]==1)
                {
                    bfs(f,c,h);
                    h++;
                }
            }
        }
        if(b>1)
            cout<<endl;
        cout<<h-2<<endl;
    }
    return 0;
}
