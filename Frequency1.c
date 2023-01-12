 #include<stdio.h>
void main()
{
    printf("Input the range of the array\n");
    int n=0,i=0,j=0,q=0;
    scanf("%d",&n);
    int a[n];
    printf("Input %d nos \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        { q=0;
            if(a[i]==a[j]&&a[i]!=0)
            {
                q++;
                a[j]=0;
            }
        }
           if(q>1)
           {printf("%d has repeated %d times\n",a[i],++q);}
	}
}