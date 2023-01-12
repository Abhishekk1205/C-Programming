#include <stdio.h>

void main()
{int x=0,y=0;
printf("Input 2 nos x,y\n");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("x=%d ,y=%d",x,y);
}

void swap(int *x,int *y)
{*x+=*y;
 *y=*x-*y;
 *x=*x-*y;
}
