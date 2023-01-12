#include <stdio.h>
void main()
{char w='a';
int i,j,a,n=3;
printf("Input the limit\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{for(a=i;a<n;a++)printf(" ");
		
	 for(j=1;j<=i;j++)
		{printf("%c ",w);
		w++;}
	printf("\n");
	}
	
	w-=n+1;
	for(i=n-1;i>0;i--)
	{for(a=i;a<n;a++)printf(" ");
		
	 for(j=1;j<=i;j++)
		{printf("%c ",w);
		w--;}
	printf("\n");
	}
	
}
