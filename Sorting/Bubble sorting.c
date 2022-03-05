//Bubble Sorting

#include<stdio.h>
main()
{
    int a[20],i,j,k,t,n;
    printf(" Specify array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(a[j]<a[j+1])
        {
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
        }
    }
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
}
