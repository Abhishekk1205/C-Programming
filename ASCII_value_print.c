#include<stdio.h> 
//#include<string.h> 
void main() 
{ 
char s='A';
int i; 
printf("ASCII value of all alphabet:\n"); 
for(i=0;i<26;i++) 
{	printf("%c  is: %d\n",s,s);
	s++;
}
	s='a';	
for(i=0;i<26;i++) 
{	printf("%c  is: %d\n",s,s);
	s++;
}
}
