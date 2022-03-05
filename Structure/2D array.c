
struct demo
{
    int a;
}st[10][10];
 #include<stdio.h>
 main()
 { int i,j,r,c,n;

     printf("Specify the metrix");
     scanf("%d%d",&r,&c);

     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
         scanf("%d",&st[i][j].a);
         }}

   for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
         printf("%d ",st[i][j].a);
         }
         printf("\n");
         }
 }
