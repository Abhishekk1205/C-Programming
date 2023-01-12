#include<stdio.h> 
void main() 
{ 
char s='A', q1[50], q2[50], q[50], w;
int i,j,l1,l2,l; 

printf("Input 2 string:\n"); 
gets(q1);
gets(q2);
l1=strlen(q1); 
l2=strlen(q2);  
   l=l1+l2; 


for(i=0;i<l1;i++) q[i]=q1[i];

for(i=0;i<l2;i++) q[i+l1]=q2[i]; 

printf("Before string conversion:\n"); puts(q);
for(i=0;i<l-1;i++) 
{for(j=i+1;j<l;j++) 
{	if(q[i]>q[j])
	{w=q[i];
	q[i]=q[j];
	q[j]=w;
	}
}}

printf("After string conversion:\n");  puts(q);
}
