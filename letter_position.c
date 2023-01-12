#include<stdio.h> 
void main() 
{ 
char s='A'; 
printf("Input an alphabet:\n");
scanf("%c",&s);
int i=s;
if(i>=65 && i<=90){
printf("%c = %d \n",s,i-64);
}
if(i>=97 && i<=122)
printf("%c = %d \n",s,i-96);

}