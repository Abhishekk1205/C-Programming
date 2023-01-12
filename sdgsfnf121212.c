#include<stdio.h>
int main()
{
	int num,rev=0, temp;
	printf("Enter a number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	if(rev==num)
	     printf("%d is palindrom number",num);
	else
	     printf("%d is not S palindrom number",num);
    return 0;
}
