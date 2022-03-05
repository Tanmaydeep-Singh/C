
#include<stdio.h>
main()
{
    int a[10],b=0,i,j,n;
    printf("Enter a number\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    printf("a[%d]=%d\n",&a[i],a[i]);

    for(i=0;i<10;i++)
     {if(a[i]>b)
        b=a[i];
     }

        printf("%d",b);

}

