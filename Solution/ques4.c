#include<stdio.h>
int main()
{
	double r,vol,area;
	printf("Enter the radius of a sphere\n");
	scanf("%lf",&r);
	vol=(r*r*r*22*4)/(3*7);
	area=4*r*r*22/7;
	printf("Area of sphere is %lf\n",area);
	printf("volume of sphere is %lf\n",vol);
	return 0;
	
}
