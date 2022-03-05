

#include<stdio.h>
main()
{
    int a[10][10],r,c,i,j,d=0;
    printf("Specify rows and columns\n");
    scanf("%d%d",&r,&c);
printf("\n Enter elements of matrix\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("\nMatrix is\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("\nTranspose of matrix is\n");
for(j=0;j<c;j++)
{
for(i=0;i<r;i++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}
