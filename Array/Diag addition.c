

#include<stdio.h>
main()
{
    int a[10][10],b=0,i,j,r,c;
    printf("Specify rows and columns");
     scanf("%d%d",&r,&c);

for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Matrix is\n");

for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        printf("%d ",a[i][j] );
    }
    printf("\n");
}
printf("Sum of the diag elements is\n");
for(i=1;i<=r;i++)
   { for(j=1;j<=c;j++)
   {
       if(i=j)
        b=b+a[i][j];  }
   }
printf("%d",b);
}
