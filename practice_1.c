#include<stdio.h> 
#include<string.h> 
void main() 
{ 
char s[30]; 
int i; 
printf("Enter the string:\n"); 
gets(s); 
for(i=0;i<strlen(s);i++) 
{ 
	printf("%c  is: %d\n",s[i],s[i]); 
}

}
