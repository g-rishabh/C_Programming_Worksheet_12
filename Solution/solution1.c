#include<stdio.h>
int main()
{
	double s1,s2,s3,s4,area,peri;
	printf("Enter the side of a rectangle(1st length then breath and repeat  \n");
	scanf("%lf %lf %lf %lf",&s1,&s2,&s3,&s4);
	if(s1 > 0 && s2 > 0)
	{ 
		peri=s1+s2+s3+s4;
		area=s1*s2;
	
		if(area>peri && s1==s3 && s2==s4 )
			printf("Area is greater");
		else if(peri>area && s     r is greater");
		else
			printf("Wrong input");
	}
	else
		printf("Wrong input");
	return 0;
}
