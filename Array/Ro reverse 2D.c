
#include<stdio.h>
main()
{
    int a[10][10],i,j,r,c;
    printf("Specify rows and columns");
     scanf("%d%d",&r,&c);

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Matrix is\n");

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",a[i][j] );
    }
    printf("\n");
}
printf(" Matrix ith reversed rows is \n");

for(i=0;i<r;i++)
{
    for(j=c-1;j>=0;j--)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}
