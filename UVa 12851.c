#include<stdio.h>
#include<math.h>
#define pi 3.1415926535897932

int main()
{
	double a,b,c,d,e,f,g,h,i,j,k,l;
	scanf("%lf",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lf %lf",&c,&d);
		d=282.0*d;
		e=12.0*d;
		f=7.0*pi*c;
		g=e/f;
		g=sqrt(g);
		g=2*g;
		printf("Case %.0lf: %.3lf\n",b,g);
	}
	return 0;
}
