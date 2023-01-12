#include<stdio.h> 
#include<string.h> 
void main() 
{ 
int i,len,temp; 
char str[50]; 
printf("Enter the string:\n"); 
gets(str); 
 
printf("\n before reversing the string: %s \n",str); 
len=strlen(str); 

 printf("\n len = %d sizeof = %d \n",len,sizeof(str)); 
 
for(i=0;i<len/2;i++) 
{ 
temp=str[i]; 
str[i]=str[len-i-1]; 
str[len-i-1]=temp; 
} 
printf(" After reversing the string: %s \n",str); 
}
