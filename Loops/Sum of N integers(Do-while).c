

#include<stdio.h>
main()
{
 int a,b=0,i,n;
 printf("Enter number");
 scanf("%d",&n);
 i=1;
 do{
        printf("enter %d numbers \n",i);
    scanf("%d",&a);
    b=b+a;
    i++;
 }
 while(i<=n);
 printf("%d",b);

}

