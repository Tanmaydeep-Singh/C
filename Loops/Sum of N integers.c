#include<stdio.h>
main()
{
    int i,a,b=0,n;
    printf("Enter number");
    scanf("%d",&n);

   for(i=1; i<=n; i++)
   {
       printf(" enter %d number",i);
       scanf("%d",&a);
    b=b+a;
   }
   printf("\n %d",b);
}



