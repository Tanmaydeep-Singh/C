

#include<stdio.h>
main()
{
    int a[10][10],b[10][10],d,i,j,r,c;
    printf("Specify rows and columns \n");
     scanf("%d%d",&r,&c);

printf("\nEnter elements for first matrix\n");
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


printf("Enter elements for second matrix\n");
for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("Matrix is\n");
for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        printf("%d ",b[i][j] );
    }
    printf("\n");
}
for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        printf("%d ",d=d+a[i][j]+b[i][j]);
        d=0;
    }
    printf("\n");
}

}
