#include<stdio.h>
int main()
{
	int i,n,flag,count=0;
	printf("list of prime numbers betbeen 1 and 100000:\n");
	for(n=2; n<=100000; n++)
	{
		flag=0;
		for(i=2; i<n; i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			{ printf("%d,",n); count++;}
	}
	printf("\n Total number of prime numbers=%d",count);
	return 0;
}
