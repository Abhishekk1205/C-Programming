#include<stdio.h> 
void main() 
{ 
int A[10000]; 
int i,n,ls=0,bs=0,x=0,c=0,s=0,e=9999,m=0; 

for(i=0;i<10000;i++) 
A[i]=i+1; 

printf("Enter the element to search :-\n"); 
scanf("%d",&n); 

printf("LINEAR SEARCH\n"); 
for(i=0;i<10000;i++) 
{ 
ls+=1; 
if(A[i]==n) 
{ 
printf("element found at %dth position after %d search\n",i,--ls);
c=c+1; 
}
} 
if(c==0) printf("element not found\n"); 

printf("BINARY SEARCH\n"); 
while(s<=e) 
{ 
bs+=1; 
m=(s+e)/2; 
if(A[m]==n) 
	{ 
	printf("element found at %dth position after %d search\n",m,bs); 
	x=1;break; 
	}

else if(A[m]<n)s=m+1; 
else if(A[m]>n) e=m-1;
}
if(x==0) printf("element not found"); 

}
