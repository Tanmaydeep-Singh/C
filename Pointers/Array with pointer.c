

#include<stdio.h>
main()
{
    int i,a[10],*p;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<10;i++)
    {
    printf("%d\n",*p);
    p++;
   }
}
