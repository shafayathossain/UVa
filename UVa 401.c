#include<stdio.h>
#include<string.h>

int mirror(char m[1000])
{
    int a,b,c,d,e;
    a=strlen(m);
    if(a==1)
    {
        b=a-1;
        if(m[b]=='A' || m[b]=='H' || m[b]=='I' || m[b]=='M' || m[b]=='O' || m[b]=='T' || m[b]=='U' || m[b]=='V' || m[b]=='W' || m[b]=='X' || m[b]=='Y' || m[b]=='1' || m[b]=='8')
        {
            return 1;
        }
        else
            return 0;
    }
    if(a%2==0)
    {
        b=a/2;
        for(c=b-1,d=b;c>=0,d<a;c--,d++)
        {
            if(m[c]=='A' && m[d]=='A')
            {
                continue;
            }
            else if((m[c]=='E' && m[d]=='3') || (m[c]=='3' && m[d]=='E'))
            {
                continue;
            }
            else if(m[c]=='H' && m[d]=='H')
            {
                continue;
            }
            else if(m[c]=='I' && m[d]=='I')
            {
                continue;
            }
            else if((m[c]=='J' && m[d]=='L') || (m[c]=='L' && m[d]=='J'))
            {
                continue;
            }
            else if((m[c]=='M' || m[c]=='O' || m[c]=='T' || m[c]=='U' || m[c]=='V' || m[c]=='W' || m[c]=='X' || m[c]=='Y' || m[c]=='1' || m[c]=='8') && (m[c]==m[d]))
            {
                continue;
            }
            else if((m[c]=='Z' && m[d]=='5') || (m[c]=='5' && m[d]=='Z'))
            {
                continue;
            }
            else if((m[c]=='S' && m[d]=='2') || m[c]=='2' && m[d]=='S')
            {
                continue;
            }
            else
                break;
        }
        if(c!=-1)
            return 0;
    }
    else if(a%2==1)
    {
        b=a/2;
        for(c=b-1,d=b+1;c>=0,d<a;c--,d++)
        {
            if(m[c]=='A' && m[d]=='A')
            {
                continue;
            }
            else if((m[c]=='E' && m[d]=='3') || (m[c]=='3' && m[d]=='E'))
            {
                continue;
            }
            else if(m[c]=='H' && m[d]=='H')
            {
                continue;
            }
            else if(m[c]=='I' && m[d]=='I')
            {
                continue;
            }
            else if((m[c]=='J' && m[d]=='L') || (m[c]=='L' && m[d]=='J'))
            {
                continue;
            }
            else if((m[c]=='M' || m[c]=='O' || m[c]=='T' || m[c]=='U' || m[c]=='V' || m[c]=='W' || m[c]=='X' || m[c]=='Y' || m[c]=='1' || m[c]=='8') && (m[c]==m[d]))
            {
                continue;
            }
            else if((m[c]=='Z' && m[d]=='5') || (m[c]=='5' && m[d]=='Z'))
            {
                continue;
            }
            else if((m[c]=='S' && m[d]=='2') || m[c]=='2' && m[d]=='S')
            {
                continue;
            }
            else
                break;
        }
        if(c!=-1)
            return 0;
        if(m[b]=='A' || m[b]=='H' || m[b]=='I' || m[b]=='M' || m[b]=='O' || m[b]=='T' || m[b]=='U' || m[b]=='V' || m[b]=='W' || m[b]=='X' || m[b]=='Y' || m[b]=='1' || m[b]=='8')
        {
            return 1;
        }
        else
            return 0;
    }
    return 1;
}

int rev(char m[1000])
{
    int a,b,c,d,e,f,g;
    char n[1000];
    a=strlen(m);
    c=0;
    for(b=a-1;b>=0;b--)
    {
        n[c]=m[b];
        c++;
    }
    n[c]='\0';
    if(strcmp(n,m)==0)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char m[1000],n[100];
    while(gets(m))
    {
        a=mirror(m);
        b=rev(m);
        if(a==0 && b==0)
        {
            printf("%s -- is not a palindrome.\n",m);
        }
        else if(a==1 && b==0)
        {
            printf("%s -- is a mirrored string.\n",m);
        }
        else if(a==0 && b==1)
        {
            printf("%s -- is a regular palindrome.\n",m);
        }
        else
            printf("%s -- is a mirrored palindrome.\n",m);
        printf("\n");
    }
    return 0;
}
