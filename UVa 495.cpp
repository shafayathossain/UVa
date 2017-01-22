#include<stdio.h>
#include<iostream>
using namespace std;
long long int fibo[5010][10000];

int main()
{
    fibo[0][0]=1;
    fibo[0][1]=0;
    fibo[1][0]=1;
    fibo[1][1]=1;
    fibo[2][0]=1;
    fibo[2][1]=1;
    long long int len=0;
    long long int c,d=0,q;
    for(long int i=3;i<=5010;i++)
    {
        len=0;
        for(q=1;q<=fibo[i-1][0];q++)
        {
            c=fibo[i-1][q]+fibo[i-2][q]+d;
            d=c/10;
            c=c%10;
            fibo[i][q]=c;
            len++;
        }
        if(d!=0)
        {
            fibo[i][q]=d;
            len++;
        }
        fibo[i][0]=len;
    }
    long long int i;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&i)!=EOF)
    {
        printf("The Fibonacci number for %lld is ",i);
        for(q=fibo[i][0];q>=1;q--)
        {
            printf("%lld",fibo[i][q]);
        }
        printf("\n");
    }
}
