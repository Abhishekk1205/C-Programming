#include<stdio.h>
int main()
{
    char ch1[50],ch2[50],ch3[50];
    int i=0;
    printf("enter the three string:\n");
    gets(ch1);
    gets(ch2);
    gets(ch3);
    printf("Dictionary order String are:\n");
    if(ch1[0]<ch2[0])
    {
      if(ch1[0]<ch3[0])
       { puts(ch1);
          if(ch2[0]<ch3[0])
          { puts(ch2);
            puts(ch3);
          }
          else
          { puts(ch3);
            puts(ch2);
          }
       }
      else
        {  puts(ch3);
           puts(ch1);
           puts(ch2);
        }
    }
    else
    { puts(ch2);
        if(ch1[0]<ch3[0])
        {  puts(ch1);
           puts(ch3);
        }
        else
        { puts(ch3);
          puts(ch1);
        }
    }
      return 0;
}
