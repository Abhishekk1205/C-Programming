#include<stdio.h> 
void main() 
{ 
int A[]={774,45,34,57,63,7,22,10}; 
int i,k,t,n; 
 
n=sizeof(A)/sizeof(A[0]); 

printf("Array before shorting\n"); 
for(i=0;i<n;i++) 
printf("%d\n",A[i]);
 
for(i=0;i<n-1;i++) 
{for(k=i+1;k<n;k++) 
{ 
	if(A[i]>A[k]) 
	{t=A[i]; A[i]=A[k]; A[k]=t; } 
}}

printf("Sorted array in ascending order\n"); 
for(i=0;i<n;i++) 
printf("%d\n",A[i]); 

}
