#include<stdio.h>
#include<math.h>
#define pi 3.1415926535897932384626433832795

int main()
{
    double r,n,Area_Of_A_Triangle,Total_area_of_polygon;
    while(scanf("%lf %lf",&r,&n)==2)
    {
        Area_Of_A_Triangle =(r*r*sin(2.0*pi/n))/2.0;
        Total_area_of_polygon = n*Area_Of_A_Triangle;
        printf("%.3lf\n",Total_area_of_polygon);
    }
    return 0;
}
