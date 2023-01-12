#include<stdio.h> 
int fib(int a,int b,int l) 
{ 
int c=a+b;
if(l<10)
{printf("%d, ",c);
return fib(b,c,++l);
}
}

void main() 
{ 
int x=0,y=1,l=2; 
printf("Fibonacci Series:\n");
printf("%d, %d, ",x,y);
fib(x,y,l);
}
