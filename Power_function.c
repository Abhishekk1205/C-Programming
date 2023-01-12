#include<stdio.h> 
long long power(int a,int b) 
{ 
int i,r=1; 
for(i=0;i<b;i++)
	r*=a; 
return r; 
}

void main() 
{ 
int x,y,r=0; 
printf("Enter any two number: \n"); 
scanf("%d %d",&x,&y); 
r=power(x,y);
printf("%d to the power %d is = %d",x,y,r);
}
