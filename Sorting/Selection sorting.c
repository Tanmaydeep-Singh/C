//Selection sorting
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
    for(j=0;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("\n");
for(i=n-1;i>=0;i--)
{
    printf("%d\n",a[i]);
}
}
