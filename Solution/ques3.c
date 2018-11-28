#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=1;i<=40;i+=3)
	{
		if(j%2==0 && i!=40)
			printf("%d, ",i);
		else if(j%2!=0 && i!=40)
		{
			printf("%d, ",i*-1);
		}
		else
			printf("%d.\n",i*-1);
		j++;
	}
	return 0;
}
