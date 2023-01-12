#include<stdio.h>
int main()
{
	int r,c;
	printf("The star printing of pyrimidal structure:\n");
	for(r=0;r<=3;r++)
	{
		for(c=0; c<=2-r; c++)
		{
			printf(" ");
		}
		for(c=2-r+1; c<=3+r; c=c+2)
		{
			printf("* ");
		}
		printf("\n");
	}
	{
		for(r=0; r<=3; r++)
		{
			for(c=0; c<=r-1; c++)
			{
				printf(" ");
			}
        for(c=0; c<=2-r; c=c+1)
		{
			printf(" *");
		}
		printf("\n");
	    }
	}
	return 0;
}
