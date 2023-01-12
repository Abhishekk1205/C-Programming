#include <stdio.h>
void main()
{
	int n[3];
	int i,a;
	printf("enter 3 nos.\n");
	
	for(i=0;i<3;i++)
   {scanf("%d",&n[i]);}
   
   if(n[0]<n[1])
   {if(n[0]<n[2])
   	a=n[0];}
   
   else if(n[1]<n[0])
   {if(n[1]<n[2])
   	a=n[1];}
   
   else if(n[2]<n[0])
   {if(n[2]<n[1])
   a=n[2];}
   
   printf("Smallest no. is %d\n",a);
}

