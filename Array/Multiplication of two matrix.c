

#include<stdio.h>
main()
{
    int a[10][10],b[10][10],r,c,i,j,k,d=0;
    printf("Specify rows and columns\n");
    scanf("%d%d",&r,&c);

printf("Enter elements of first matrix\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
     scanf("%d",&a[i][j]);
    }
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
     printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("Enter elements of second matrix\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
     printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Product of two matrix is\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {d=0;
        for(k=0;k<r;k++)
       {d=d+a[i][k]*b[k][j]; }
        printf("%d ",d);
        }

    printf("\n");
}}


