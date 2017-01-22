#include<stdio.h>
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int graph[10003][10003];

int bfs(int a)
{
    int c=0,d,e,f;
    queue<int>n;
    n.push(a);
    graph[a][graph[a][0]]=-2;
    while(!n.empty())
    {
        d=n.front();
        f=graph[d][0];
        c++;
        for(int i=1;i<f;i++)
        {
            e=graph[d][i];
            if(graph[e][graph[e][0]]==0)
            {
                graph[e][graph[e][0]]=-2;
                n.push(e);
            }
        }
        n.pop();
    }
    return c;
}

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d %d %d",&c,&d,&e);
        memset(graph,0,sizeof(graph));
        for(f=1;f<=c;f++)
        {
            graph[f][0]=1;
        }
        for(f=1;f<=d;f++)
        {
            scanf("%d %d",&g,&h);
            graph[g][graph[g][0]]=h;
            graph[g][0]++;
        }
        h=0;
        for(f=1;f<=e;f++)
        {
            scanf("%d",&g);
            if(graph[g][graph[g][0]]!=0)
                continue;
            h=h+bfs(g);
        }
        printf("%d\n",h);
    }
    return 0;
}
