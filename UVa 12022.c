#include<stdio.h>

int main()
{
    int a,c[11]={1,3,13,75,541,4683,47293,545835,7087261,102247563,1622632573},b,d;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&d);
        printf("%d\n",c[d-1]);
    }
    return 0;
}
