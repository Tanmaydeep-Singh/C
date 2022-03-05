


#include<stdio.h>
main()
{
    int i,a,b=0,n;
printf("Enter numbers");
scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("Enter %d number\n",i);

        scanf("%d",&a);
        i++;
       b=b+a;
    }
    printf("%d",b);
}

