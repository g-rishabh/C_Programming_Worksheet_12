#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=1;i<=40;i+=3)
	{
		if(i!=40)
			printf("%d, ",i);
		else
			printf("%d.\n",i);
	}
	return 0;
}
