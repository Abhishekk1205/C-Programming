#include<stdio.h> 
//#include<string.h> 
void main() 
{ 
char s='A', q[50] ,w;
int i,j,l; 

printf("Input a string:\n"); 
gets(q);
l=strlen(q);      

for(i=0;i<l-1;i++) 
{for(j=i+1;j<l;j++) 
{	if(q[i]>q[j])
	{w=q[i];
	q[i]=q[j];
	q[j]=w;
	}
}}

puts(q);
}
