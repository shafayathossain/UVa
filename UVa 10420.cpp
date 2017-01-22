#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int counter[100];
char name[5000][100];

int main()
{
    int a,b,c,d,e,f,g,h=0;
    char nn[1000],temp[100];
    scanf("%d",&a);
    c=0;
    for(b=1;b<=a;b++)
    {
        scanf("%s",temp);
        if(strlen(temp)>h)
        {
            h=strlen(temp);
        }
        gets(nn);
        for(d=0;d<c;d++)
        {
            if(strcmp(name[d],temp)==0)
            {
                counter[d]++;
                break;
            }
        }
        if(d==c)
        {
            strcpy(name[c],temp);
            counter[c]++;
            c++;
        }
    }
    for(d=0;d<c;d++)
    {
        for(e=d+1;e<c;e++)
        {
            if(strcmp(name[d],name[e])>0)
            {
                strcpy(temp,name[d]);
                strcpy(name[d],name[e]);
                strcpy(name[e],temp);
                f=counter[d];
                counter[d]=counter[e];
                counter[e]=f;
            }
        }
    }
    for(d=0;d<c;d++)
    {
        printf("%s %d\n",name[d],counter[d]);
    }
    return 0;
}
