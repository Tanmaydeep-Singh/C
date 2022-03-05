
#include<stdio.h>
main()
{
    int a[10][10],b=0,i,j,r,c;
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
for(i=0;i<r;i++)
{
    {for(j=0;j<c;j++)

        b=b+a[i][j];
        printf( "Sum of %d row is %d\n",i+1,b);}
        b=0;

}

}
