

#include<stdio.h>
main()
{
    int a[10],i,j,n=0,*p,*q,*r;
    printf("Enter values");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
p=a;

    for(i=0;i<10;i++)
{
        if(*p>n)
           n=*p;
             p++;

    }
        printf("%d\n",n);

}
