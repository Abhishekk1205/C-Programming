#include<stdio.h> 
#include<string.h> 
void main() 
{ 
char str[30]; 
int i; 
printf("Enter the string: "); 
gets(str); 
for(i=0;i<strlen(str);i++) 
{ 
if(str[i]>=97 && str[i]<=122) 
{ 
str[i]=str[i]-32; 
} 
}
printf("\n lower case to upper case string is: %s",str); 
}
