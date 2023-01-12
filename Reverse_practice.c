#include<stdio.h> 
#include<string.h> 
void main() 
{ 
char s[30],c; 
int i,a=0; 
printf("Enter the string: \n"); 
gets(s); 
a=strlen(s);
for(i=0;i<a/2;i++) 
{ 
	c=s[a-i-1];	s[a-i-1]=s[i];	s[i]=c;
} 
printf("\n Reverse string is: %s",s); 
}
