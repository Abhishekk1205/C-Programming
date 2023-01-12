#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)
{if(n%2==0)
	return true;
	else return false;
}

void main()
{int n=0;
	printf("enter a no.\n");
	scanf("%d",&n);
    isEven(n);
	if(isEven(n)==true)
	printf("No.is Even = %d",n);
	else printf("No.is odd = %d",n);
}
