#include<stdio.h> 
//#include<string.h> 
void main() 
{ 
char s='A', q1[50], q2[50], q[50], w;
int i,j,l1,l2,l,a=0; 

printf("Input 2 string:\n"); 
gets(q1);
gets(q2);
l1=strlen(q1); 
l2=strlen(q2);  
   l=l1+l2; 

for(i=0;i<l;i++) 
{if(i<=l1) 
{q[i]=q1[i];             puts(q);printf(" i= %d:\n",i); }

else if(i>l1) 
{q[i]=q2[a];    a++;     puts(q);printf(" i= %d:\n",i); }


}
puts(q1);puts(q2);
printf("l1 = %d ,l2 = %d, l = %d:\n",l1,l2,l); 
puts(q);


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