#include <stdio.h>
void main()
{
int i,j,a,n;
for(i=1;i<=4;i++)
	{for(a=i;a<4;a++)printf(" ");
		n=1;
	 for(j=1;j<=i;j++)
		{
		printf("%d ",(i*n));
		 n++;
		}
		printf("\n");
	}
}
