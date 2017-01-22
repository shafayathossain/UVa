#include<stdio.h>
#include<iostream>
using namespace std;

int prime[100];
int numbers[110];
int numbersfact[101][100];

void siev()
{
    prime[0]=2;
    int k=1;
    for(int i=3;i<=110;i+=2)
    {
        if(numbers[i]==0)
        {
            int j=i*2;
            while(j<=110)
            {
                numbers[j]=1;
                j=j+i;
            }
            prime[k]=i;
            k++;
        }
    }
}

void facotrs()
{
    for(int i=2;i<=100;i++)
    {
        int k=0;
        int a=1,j=i;
        int count=numbersfact[i-1][a];
        while(j/2!=0)
        {
            if(j%prime[k]==0)
            {
                count++;
                j=j/prime[k];
            }
            else
            {
                numbersfact[i][a]=count;
                a++;
                count=numbersfact[i-1][a];
                k++;
            }
            if(j==1)
            {
                numbersfact[i][a]=count;
                a++;
                count=numbersfact[i-1][a];
                k++;
            }
        }
        while(numbersfact[i-1][a]!=0)
        {
            numbersfact[i][a]=numbersfact[i-1][a];
            a++;
            k++;
        }
        numbersfact[i][0]=k;
    }
}

int main()
{
    siev();
    facotrs();
    int i=0;
    int a,b,c,d,e,f,g,h,j,k,l;
    while(cin>>a)
    {
        if(a==0)
            break;
        printf("%3d! =",a);
        for(b=1;b<=numbersfact[a][0];b++)
        {
            if(b%16==0)
                cout<<endl<<"      ";
            printf("%3d",numbersfact[a][b]);
        }
        cout<<endl;
    }

}
