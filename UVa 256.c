#include <stdio.h>
#include<string.h>

int main ()
{
    double a;
    while(scanf("%lf",&a)==1)
    {
        if(a/2.0==1)
        {
            printf("00\n01\n81\n");
        }
        else if(a/2.0==1.5)
        {
            printf("000\n001\n081\n");
        }
        else if(a/2.0==2)
        {
            printf("0000\n0001\n2025\n3025\n9801\n");
        }
        else if(a/2.0==2.5)
        {
            printf("00000\n00001\n02025\n03025\n09801\n");
        }
        else if(a/2.0==3)
        {
            printf("000000\n000001\n088209\n494209\n998001\n");
        }
        else if(a/2.0==3.5)
        {
            printf("0000000\n0000001\n0088209\n0494209\n0998001\n");
        }
        else if(a/2.0==4)
        {
            printf("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n");
        }
        else if(a/2.0==4.5)
        {
            printf("000000000\n000000001\n004941729\n007441984\n024502500\n025502500\n052881984\n060481729\n099980001\n");
        }
    }
    return 0;
}

